/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:49:23 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class WKWebProcessPlugInFrame, NSString;

@interface WKWebProcessPlugInNodeHandle : NSObject <WKObject> {

	ObjectStorage<WebKit::InjectedBundleNodeHandle> _nodeHandle;

}

@property (nonatomic,readonly) CGRect elementBounds; 
@property (assign,nonatomic) BOOL HTMLInputElementIsAutoFilled; 
@property (nonatomic,readonly) BOOL HTMLInputElementIsUserEdited; 
@property (nonatomic,readonly) BOOL HTMLTextAreaElementIsUserEdited; 
@property (nonatomic,readonly) WKWebProcessPlugInNodeHandle * HTMLTableCellElementCellAbove; 
@property (nonatomic,readonly) WKWebProcessPlugInFrame * frame; 
@property (readonly) InjectedBundleNodeHandle* _nodeHandle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) Object* _apiObject; 
+(id)nodeHandleWithJSValue:(id)arg1 inContext:(id)arg2 ;
-(void)dealloc;
-(WKWebProcessPlugInFrame *)frame;
-(Object*)_apiObject;
-(InjectedBundleNodeHandle*)_nodeHandle;
-(id)htmlIFrameElementContentFrame;
-(id)renderedImageWithOptions:(unsigned)arg1 ;
-(BOOL)HTMLInputElementIsAutoFilled;
-(void)setHTMLInputElementIsAutoFilled:(BOOL)arg1 ;
-(BOOL)HTMLInputElementIsUserEdited;
-(BOOL)HTMLTextAreaElementIsUserEdited;
-(BOOL)isTextField;
-(WKWebProcessPlugInNodeHandle *)HTMLTableCellElementCellAbove;
-(CGRect)elementBounds;
@end

