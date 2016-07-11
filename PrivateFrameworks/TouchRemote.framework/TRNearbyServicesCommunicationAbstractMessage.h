/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@interface TRNearbyServicesCommunicationAbstractMessage : NSObject <NSSecureCoding> {
    SFMessage * _message;
    <_SFMessenger> * _messenger;
}

@property (nonatomic, retain) SFMessage *message;
@property (nonatomic, retain) <_SFMessenger> *messenger;

+ (id)packetFromMessage:(id)arg1 withMessenger:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionFormat;
- (id)dataRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)message;
- (id)messenger;
- (void)sendResponse:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setMessenger:(id)arg1;

@end