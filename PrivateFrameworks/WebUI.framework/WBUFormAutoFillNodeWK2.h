/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
 */

@interface WBUFormAutoFillNodeWK2 : NSObject <WBSFormAutoFillNode> {
    WKWebProcessPlugInNodeHandle * _nodeHandle;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) WKWebProcessPlugInNodeHandle *nodeHandle;
@property (readonly) Class superclass;

+ (id)autoFillNodeWithNodeHandle:(id)arg1;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })elementBounds;
- (id)initWithJSWrapper:(struct OpaqueJSValue { }*)arg1 inContext:(struct OpaqueJSContext { }*)arg2;
- (id)initWithNodeHandle:(id)arg1;
- (bool)isHTMLInputElementUserEdited;
- (bool)isHTMLTextAreaElementUserEdited;
- (id)nodeHandle;
- (void)setHTMLInputElementAutofilled:(bool)arg1;

@end