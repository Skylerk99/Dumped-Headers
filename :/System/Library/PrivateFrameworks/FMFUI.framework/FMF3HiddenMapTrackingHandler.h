/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:30 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/FMFUI.framework/FMFUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MKMapViewDelegate.h>

@protocol FMF3HiddenMapTrackingHandlerDelegate;
@class MKMapView, NSString;

@interface FMF3HiddenMapTrackingHandler : NSObject <MKMapViewDelegate> {

	MKMapView* _hiddenMapView;
	id<FMF3HiddenMapTrackingHandlerDelegate> _delegate;

}

@property (nonatomic,retain) MKMapView * hiddenMapView;                                             //@synthesize hiddenMapView=_hiddenMapView - In the implementation block
@property (assign,nonatomic,__weak) id<FMF3HiddenMapTrackingHandlerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)mapView:(id)arg1 didChangeUserTrackingMode:(long long)arg2 animated:(BOOL)arg3 ;
-(void)setDelegate:(id<FMF3HiddenMapTrackingHandlerDelegate>)arg1 ;
-(void)dealloc;
-(id<FMF3HiddenMapTrackingHandlerDelegate>)delegate;
-(id)initWithView:(id)arg1 ;
-(MKMapView *)hiddenMapView;
-(void)setHiddenMapView:(MKMapView *)arg1 ;
@end

