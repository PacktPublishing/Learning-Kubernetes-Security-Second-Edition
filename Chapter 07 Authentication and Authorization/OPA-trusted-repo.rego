package kubernetes.admission
import rego.v1
deny contains msg if {
input.request.kind.kind == “Pod”
image := input.request.object.spec.containers[_].image
not startswith(image, “goodregistry.com/”)
msg := sprintf(“image ‘%v’ comes from untrusted registry”, [image])
}