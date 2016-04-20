/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:55 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKMultiPoint.h>
#import <libobjc.A.dylib/MKOverlay.h>

@class NSString;

@interface MKPolyline : MKMultiPoint <MKOverlay>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SCD_Struct_MK1 coordinate; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * subtitle; 
@property (nonatomic,readonly) SCD_Struct_MK2 boundingMapRect; 
+(id)polylineWithPoints:(SCD_Struct_MK1*)arg1 count:(unsigned long long)arg2 ;
+(id)polylineWithCoordinates:(SCD_Struct_MK1*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)intersectsMapRect:(SCD_Struct_MK2)arg1 ;
-(SCD_Struct_MK2)boundingMapRect;
-(void)_calculateBounds;
-(SCD_Struct_MK1)coordinate;
@end

