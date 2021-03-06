/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNPlaceholderInfo : TSWPShapeInfo

+ (id)newObjectForUnarchiver:(id)arg1;

- (bool)autoListRecognition;
- (bool)autoListTermination;
- (id)copyAsShapeInfoWithContext:(id)arg1;
- (bool)displaysInstructionalText;
- (id)initFromUnarchiver:(id)arg1;
- (id)instructionalText;
- (int)kind;
- (Class)layoutClass;
- (void)loadFromArchive:(const struct PlaceholderArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct ShapeInfoArchive {} *x5; int x6; }*)arg1 unarchiver:(id)arg2;
- (Class)repClass;
- (void)saveToArchive:(struct PlaceholderArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned int x3[1]; int x4; struct ShapeInfoArchive {} *x5; int x6; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (bool)shouldHideEmptyBullets;

@end
