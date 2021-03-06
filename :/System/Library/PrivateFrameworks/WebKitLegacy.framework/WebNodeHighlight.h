/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:00 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebKitLegacy/WebKitLegacy-Structs.h>
@class WAKView, WebHighlightLayer, WebNodeHighlightView;

@interface WebNodeHighlight : NSObject {

	WAKView* _targetView;
	WebHighlightLayer* _highlightLayer;
	WebNodeHighlightView* _highlightView;
	InspectorController* _inspectorController;
	id _delegate;

}
-(void)setNeedsDisplay;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)delegate;
-(void)detach;
-(void)attach;
-(id)highlightView;
-(id)targetView;
-(id)initWithTargetView:(id)arg1 inspectorController:(InspectorController*)arg2 ;
-(InspectorController*)inspectorController;
@end

