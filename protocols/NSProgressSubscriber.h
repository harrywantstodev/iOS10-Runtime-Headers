/* Generated by RuntimeBrowser.
 */

@protocol NSProgressSubscriber <NSObject>

@required

- (oneway void)addPublisher:(id <NSProgressPublisher>)arg1 forID:(NSString *)arg2 withValues:(NSProgressValues *)arg3 isOld:(bool)arg4;
- (oneway void)observePublisherForID:(NSString *)arg1 value:(id)arg2 forKey:(NSString *)arg3 inUserInfo:(bool)arg4;
- (oneway void)removePublisherForID:(NSString *)arg1;

@end
