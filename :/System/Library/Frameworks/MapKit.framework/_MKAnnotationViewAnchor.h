/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:54 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <VectorKit/VKAnchorWrapper.h>

@class MKAnnotationView;

@interface _MKAnnotationViewAnchor : VKAnchorWrapper {

	MKAnnotationView* _annotationView;

}

@property (assign,nonatomic,__weak) MKAnnotationView * annotationView;              //@synthesize annotationView=_annotationView - In the implementation block
-(MKAnnotationView *)annotationView;
-(void)setAnnotationView:(MKAnnotationView *)arg1 ;
-(SCD_Struct_MK1)coordinate;
@end

