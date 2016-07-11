/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLFaceInstance : PBCodable <NSCopying> {
    double  _centerX;
    double  _centerY;
    unsigned int  _faceState;
    struct { 
        unsigned int centerX : 1; 
        unsigned int centerY : 1; 
        unsigned int size : 1; 
        unsigned int faceState : 1; 
    }  _has;
    NSString * _personIdentifier;
    NSMutableArray * _rejectedPersonIdentifiers;
    double  _size;
}

@property (nonatomic) double centerX;
@property (nonatomic) double centerY;
@property (getter=isConfirmed, nonatomic) bool confirmed;
@property (nonatomic) unsigned int faceState;
@property (nonatomic) bool hasCenterX;
@property (nonatomic) bool hasCenterY;
@property (nonatomic) bool hasFaceState;
@property (nonatomic, readonly) bool hasPersonIdentifier;
@property (nonatomic) bool hasSize;
@property (getter=isHidden, nonatomic) bool hidden;
@property (getter=isManual, nonatomic) bool manual;
@property (getter=isNameSourceAuto, nonatomic) bool nameSourceAuto;
@property (getter=isNoneState, nonatomic, readonly) bool noneState;
@property (nonatomic, retain) NSString *personIdentifier;
@property (nonatomic, retain) NSMutableArray *rejectedPersonIdentifiers;
@property (getter=isRepresentativeFace, nonatomic) bool representativeFace;
@property (nonatomic) double size;

+ (Class)rejectedPersonIdentifiersType;

- (void).cxx_destruct;
- (bool)_isFaceStateBitSet:(unsigned int)arg1;
- (void)_setFaceStateBit:(unsigned int)arg1 fromBoolValue:(bool)arg2;
- (void)addRejectedPersonIdentifiers:(id)arg1;
- (double)centerX;
- (double)centerY;
- (void)clearRejectedPersonIdentifiers;
- (void)clearState;
- (long long)compare:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)faceState;
- (bool)hasCenterX;
- (bool)hasCenterY;
- (bool)hasFaceState;
- (bool)hasPersonIdentifier;
- (bool)hasSize;
- (unsigned long long)hash;
- (bool)isConfirmed;
- (bool)isEqual:(id)arg1;
- (bool)isHidden;
- (bool)isManual;
- (bool)isNameSourceAuto;
- (bool)isNoneState;
- (bool)isRepresentativeFace;
- (void)mergeFrom:(id)arg1;
- (id)personIdentifier;
- (bool)readFrom:(id)arg1;
- (id)rejectedPersonIdentifiers;
- (id)rejectedPersonIdentifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)rejectedPersonIdentifiersCount;
- (void)setCenterX:(double)arg1;
- (void)setCenterY:(double)arg1;
- (void)setConfirmed:(bool)arg1;
- (void)setFaceState:(unsigned int)arg1;
- (void)setHasCenterX:(bool)arg1;
- (void)setHasCenterY:(bool)arg1;
- (void)setHasFaceState:(bool)arg1;
- (void)setHasSize:(bool)arg1;
- (void)setHidden:(bool)arg1;
- (void)setManual:(bool)arg1;
- (void)setNameSourceAuto:(bool)arg1;
- (void)setPersonIdentifier:(id)arg1;
- (void)setRejectedPersonIdentifiers:(id)arg1;
- (void)setRepresentativeFace:(bool)arg1;
- (void)setSize:(double)arg1;
- (double)size;
- (void)writeTo:(id)arg1;

@end