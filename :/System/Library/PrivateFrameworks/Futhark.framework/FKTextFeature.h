/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:51:45 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Futhark.framework/Futhark
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Futhark/Futhark-Structs.h>
@class NSArray;

@interface FKTextFeature : NSObject {

	void* _backingObject;
	SCD_Struct_FK0* _session;
	int _scale;
	long long _featureID;
	NSArray* _corners;
	long long _type;
	NSArray* _subFeatures;
	CGRect _boundingBox;

}

@property (nonatomic,readonly) long long featureID;                   //@synthesize featureID=_featureID - In the implementation block
@property (nonatomic,readonly) CGRect boundingBox;                    //@synthesize boundingBox=_boundingBox - In the implementation block
@property (nonatomic,retain,readonly) NSArray * corners;              //@synthesize corners=_corners - In the implementation block
@property (nonatomic,readonly) long long type;                        //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSArray * subFeatures;                   //@synthesize subFeatures=_subFeatures - In the implementation block
+(id)featureFromConcomp:(concomp*)arg1 session:(SCD_Struct_FK0*)arg2 roiOffset:(CGPoint)arg3 dimensions:(CGSize)arg4 type:(long long)arg5 createDiacriticFeatures:(BOOL)arg6 featureID:(long long*)arg7 scale:(int)arg8 ;
+(id)featureFromSequenceIndex:(int)arg1 session:(SCD_Struct_FK0*)arg2 roiOffset:(CGPoint)arg3 dimensions:(CGSize)arg4 createConcompFeatures:(BOOL)arg5 createDiacriticFeatures:(BOOL)arg6 featureID:(long long*)arg7 scale:(int)arg8 ;
-(NSArray *)subFeatures;
-(long long)featureID;
-(void)dealloc;
-(long long)type;
-(NSArray *)corners;
-(CGRect)boundingBox;
-(void)setSubFeatures:(NSArray *)arg1 ;
-(id)initWithType:(long long)arg1 boundingBox:(CGRect*)arg2 corners:(id)arg3 featureID:(long long)arg4 session:(SCD_Struct_FK0*)arg5 backingObject:(void*)arg6 scale:(int)arg7 ;
@end

