
(cl:in-package :asdf)

(defsystem "auto_navi-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "gps_data" :depends-on ("_package_gps_data"))
    (:file "_package_gps_data" :depends-on ("_package"))
    (:file "try1" :depends-on ("_package_try1"))
    (:file "_package_try1" :depends-on ("_package"))
    (:file "try2" :depends-on ("_package_try2"))
    (:file "_package_try2" :depends-on ("_package"))
    (:file "try3" :depends-on ("_package_try3"))
    (:file "_package_try3" :depends-on ("_package"))
  ))