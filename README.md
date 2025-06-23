# Learning-Kubernetes-Security-Second-Edition
Learning Kubernetes Security - Second Edition, published by Packt


Kubernetes Security Book – Code Examples and YAML Files
Welcome to the official GitHub repository for the Learning Kubernetes Security book by Raul Lapaz.

This repository contains all the hands-on code, YAML manifests, configurations, and examples referenced throughout the chapters of the book. It is structured to align with the book's chapters for easy navigation and use.

📂 Repository Structure
Each folder corresponds to a chapter in the book and contains relevant Kubernetes manifests, security configurations, and supporting files.

bash
Copy
Edit
/chapter01-kubernetes-architecture/
/chapter02-networking/
/chapter03-threat-model/
/chapter04-least-privilege/
/chapter05-security-boundaries/
/chapter06-securing-cluster-components/
/chapter07-authz-authn-admission/
/chapter08-securing-pods/
/chapter09-shift-left/
/chapter10-monitoring-observability/
/chapter11-log-analysis/
/chapter12-defense-in-depth/
/chapter13-vulnerabilities-escapes/
/chapter14-third-party-plugins/
/chapter15-Appendix/
/tools/
/README.md
/LICENSE
📦 What's Included
✅ YAML manifests for Pods, Services, Ingress, RBAC policies, Network Policies, Admission Controllers, and more.

🔐 Runtime security rules and examples using tools like Falco and Tetragon.

🧪 CI/CD and scanning examples using tools like Trivy, Syft, and Grype.

📈 Monitoring and observability configs using Prometheus, Grafana, and Kubernetes-native resources.

🔍 Threat modeling and detection examples, including container escape scenarios.

🛠️ Prerequisites
To test and deploy the manifests, you should have access to:

A running Kubernetes cluster (e.g., kind, Minikube, or cloud-managed)

kubectl configured

(Optional) Tools referenced in the book such as:

Falco, Tetragon

Trivy, Grype, Syft

Prometheus, Grafana

📚 About the Book
The Kubernetes Security book provides a comprehensive guide to securing Kubernetes environments—covering architecture, threats, hardening techniques, monitoring, and real-world attack scenarios.

Each chapter includes practical examples, and this repo serves as the companion resource for readers to follow along or test concepts in their own clusters.

📬 Feedback & Contributions
If you find issues or have suggestions, feel free to open a GitHub issue or pull request. Feedback is always welcome.