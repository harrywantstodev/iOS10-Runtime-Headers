/* Generated by RuntimeBrowser.
 */

@protocol MTLDebugCommandEncoder <MTLCommandEncoder>

@required

- (void)IOLog:(NSString *)arg1;
- (void)IOLogBytes:(const char *)arg1 length:(unsigned long long)arg2;
- (void)kprintf:(NSString *)arg1;
- (void)kprintfBytes:(const char *)arg1 length:(unsigned long long)arg2;

@optional

- (void)dumpBuffer:(id <MTLBuffer>)arg1 name:(const char *)arg2;
- (void)dumpTexture:(id <MTLTexture>)arg1 name:(const char *)arg2;
- (void)postFinishEvent:(const char *)arg1;

@end