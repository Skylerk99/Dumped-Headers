/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:39 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@class NSString, GEOFeatureStyleAttributes;

@interface VKFeatureMarker : NSObject {

	SCD_Struct_VK77* _feature;

}

@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) unsigned long long featureId; 
@property (nonatomic,readonly) GEOFeatureStyleAttributes * styleAttributes; 
-(NSString *)name;
-(GEOFeatureStyleAttributes *)styleAttributes;
-(id)initWithFeature:(SCD_Struct_VK77*)arg1 ;
-(unsigned long long)featureId;
@end

