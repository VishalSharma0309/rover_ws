; Auto-generated. Do not edit!


(cl:in-package katana_msgs-msg)


;//! \htmlinclude JointMovementFeedback.msg.html

(cl:defclass <JointMovementFeedback> (roslisp-msg-protocol:ros-message)
  ()
)

(cl:defclass JointMovementFeedback (<JointMovementFeedback>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <JointMovementFeedback>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'JointMovementFeedback)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name katana_msgs-msg:<JointMovementFeedback> is deprecated: use katana_msgs-msg:JointMovementFeedback instead.")))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <JointMovementFeedback>) ostream)
  "Serializes a message object of type '<JointMovementFeedback>"
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <JointMovementFeedback>) istream)
  "Deserializes a message object of type '<JointMovementFeedback>"
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<JointMovementFeedback>)))
  "Returns string type for a message object of type '<JointMovementFeedback>"
  "katana_msgs/JointMovementFeedback")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'JointMovementFeedback)))
  "Returns string type for a message object of type 'JointMovementFeedback"
  "katana_msgs/JointMovementFeedback")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<JointMovementFeedback>)))
  "Returns md5sum for a message object of type '<JointMovementFeedback>"
  "d41d8cd98f00b204e9800998ecf8427e")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'JointMovementFeedback)))
  "Returns md5sum for a message object of type 'JointMovementFeedback"
  "d41d8cd98f00b204e9800998ecf8427e")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<JointMovementFeedback>)))
  "Returns full string definition for message of type '<JointMovementFeedback>"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'JointMovementFeedback)))
  "Returns full string definition for message of type 'JointMovementFeedback"
  (cl:format cl:nil "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <JointMovementFeedback>))
  (cl:+ 0
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <JointMovementFeedback>))
  "Converts a ROS message object to a list"
  (cl:list 'JointMovementFeedback
))