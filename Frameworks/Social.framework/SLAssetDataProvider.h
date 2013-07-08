/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/Social.framework/Social
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSError, ALAssetsLibrary, NSObject<OS_dispatch_queue>, NSMutableArray;

@interface SLAssetDataProvider : NSObject  {
    ALAssetsLibrary *_assetsLibrary;
    int _numRequestedImages;
    unsigned int _maxByteSize;
    NSMutableArray *_deliveryQueue;
    NSError *_lastError;
    NSObject<OS_dispatch_queue> *_downsamplingQueue;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _fetchCompletion;

}

@property(copy) id fetchCompletion;


- (void)fetchVideoDataForAssetsURL:(id)arg1 completion:(id)arg2;
- (void)fetchImageDataForAssetsURLs:(id)arg1 maxByteSize:(unsigned int)arg2 completion:(id)arg3;
- (id)_createMappedDataWithTempFileFromAsset:(id)arg1;
- (void)_assetFetchFailedWithError:(id)arg1;
- (void)fetchedAsset:(id)arg1;
- (void)_downsamplingCompletedForAsset:(id)arg1 withDownsampledData:(id)arg2;
- (void)_downsamplingFailedForAsset:(id)arg1 withError:(id)arg2;
- (void)_checkDeliveryComplete;
- (void)setFetchCompletion:(id)arg1;
- (id)fetchCompletion;
- (id)init;
- (void).cxx_destruct;

@end