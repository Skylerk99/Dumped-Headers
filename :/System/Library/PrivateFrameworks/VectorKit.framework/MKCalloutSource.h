/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:40 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, UIView;


@protocol MKCalloutSource <NSObject>
@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (nonatomic,retain,readonly) UIView * leftCalloutAccessoryView; 
@property (nonatomic,retain,readonly) UIView * rightCalloutAccessoryView; 
@property (nonatomic,retain,readonly) UIView * detailCalloutAccessoryView; 
@optional
-(UIView *)detailCalloutAccessoryView;
-(UIView *)leftCalloutAccessoryView;
-(UIView *)rightCalloutAccessoryView;
-(NSString *)subtitle;

@required
-(CGPoint*)calloutAnchorPointWithCanvasSize:(CGSize)arg1 canvasScale:(double)arg2 snapToPixels:(BOOL)arg3;
-(CGPoint*)screenPointToScrollRelativeToWithCanvasSize:(CGSize)arg1 canvasScale:(double)arg2;
-(id)debugAnchorPointString;
-(id)title;

@end

