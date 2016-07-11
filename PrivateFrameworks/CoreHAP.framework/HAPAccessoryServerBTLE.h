/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPAccessoryServerBTLE : HAPAccessoryServer {
    HAPAccessoryServerBrowserBTLE * _browser;
    unsigned char  _connectionIdleTime;
    unsigned long long  _hapBLEProtocolVersion;
    CBPeripheral * _peripheral;
    unsigned long long  _resumeSessionID;
    NSNumber * _stateNumber;
}

@property (nonatomic, readonly) HAPAccessoryServerBrowserBTLE *browser;
@property (nonatomic) unsigned char connectionIdleTime;
@property (nonatomic, readonly) unsigned long long hapBLEProtocolVersion;
@property (nonatomic, readonly) CBPeripheral *peripheral;
@property (nonatomic, readonly) unsigned long long resumeSessionID;
@property (nonatomic, retain) NSNumber *stateNumber;

+ (id)hapUUIDFromBTLEUUID:(id)arg1;

- (void).cxx_destruct;
- (id)browser;
- (unsigned char)connectionIdleTime;
- (void)handleConnectionWithError:(id)arg1;
- (void)handleDisconnectionWithError:(id)arg1 completionQueue:(id)arg2 completionHandler:(id /* block */)arg3;
- (unsigned long long)hapBLEProtocolVersion;
- (id)initWithPeripheral:(id)arg1 name:(id)arg2 pairingUsername:(id)arg3 statusFlags:(id)arg4 stateNumber:(id)arg5 category:(id)arg6 connectionIdleTime:(unsigned char)arg7 browser:(id)arg8 keyStore:(id)arg9;
- (long long)linkType;
- (void)notifyDelegateUdpatedStateNumber;
- (id)peripheral;
- (unsigned long long)resumeSessionID;
- (void)setConnectionIdleTime:(unsigned char)arg1;
- (void)setStateNumber:(id)arg1;
- (id)stateNumber;
- (void)updateConnectionIdleTime:(unsigned char)arg1;
- (bool)updatePeripheralIdentifier:(id*)arg1;
- (bool)updateResumeSessionID:(unsigned long long)arg1;

@end