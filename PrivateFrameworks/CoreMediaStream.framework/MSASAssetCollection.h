/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@class <NSCoding>, NSString, NSArray, NSDictionary, NSDate;

@interface MSASAssetCollection : NSObject <NSCopying> {
    BOOL _hasComments;
    BOOL _isDeletable;
    BOOL _isMine;
    NSString *_GUID;
    NSString *_ctag;
    NSString *_albumGUID;
    NSArray *_assets;
    NSString *_fileName;
    NSString *_path;
    <NSCoding> *_userInfo;
    NSDictionary *_metadata;
    NSDate *_timestamp;
    NSString *_personID;
    NSString *_fullName;
    NSString *_firstName;
    NSString *_lastName;
    NSString *_email;
    long long _photoNumber;
}

@property(retain) NSString * GUID;
@property(retain) NSString * ctag;
@property(retain) NSString * albumGUID;
@property(retain) NSArray * assets;
@property(retain) NSString * fileName;
@property(retain) NSString * path;
@property(retain) <NSCoding> * userInfo;
@property(retain) NSDictionary * metadata;
@property long long photoNumber;
@property(retain) NSDate * timestamp;
@property(retain) NSString * personID;
@property(retain) NSString * fullName;
@property(retain) NSString * firstName;
@property(retain) NSString * lastName;
@property(retain) NSString * email;
@property BOOL isDeletable;
@property BOOL isMine;
@property BOOL hasComments;

+ (id)MSASPAssetCollectionFromProtocolDictionary:(id)arg1;
+ (id)assetCollectionWithAssetCollection:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (id)MSASPProtocolDictionary;
- (void)setHasComments:(BOOL)arg1;
- (id)initWithFileName:(id)arg1 path:(id)arg2;
- (BOOL)hasVideoAsset;
- (void)setPhotoNumber:(long long)arg1;
- (long long)photoNumber;
- (void)setAssets:(id)arg1;
- (id)assets;
- (void)setIsMine:(BOOL)arg1;
- (BOOL)isMine;
- (void)setIsDeletable:(BOOL)arg1;
- (BOOL)isDeletable;
- (void)setAlbumGUID:(id)arg1;
- (id)albumGUID;
- (void)setFullName:(id)arg1;
- (void)setGUID:(id)arg1;
- (id)mediaAssetType;
- (void)setCtag:(id)arg1;
- (id)ctag;
- (void)setMetadataValue:(id)arg1 forKey:(id)arg2;
- (void)setEmail:(id)arg1;
- (void)setFileName:(id)arg1;
- (id)personID;
- (void)setPersonID:(id)arg1;
- (BOOL)hasComments;
- (void)setMetadata:(id)arg1;
- (id)metadata;
- (void)setLastName:(id)arg1;
- (void)setFirstName:(id)arg1;
- (id)lastName;
- (id)firstName;
- (id)fullName;
- (id)GUID;
- (id)email;
- (void)setTimestamp:(id)arg1;
- (id)timestamp;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)userInfo;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setPath:(id)arg1;
- (id)path;
- (void)setUserInfo:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)fileName;

@end