/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:02 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PLCloudQueueObject.h>

@class NSString;

@interface PLCloudSyncStep : NSObject <PLCloudQueueObject> {

	unsigned short _currentQualityClass;
	unsigned short _desiredQualityClass;
	NSString* _assetUuid;

}

@property (nonatomic,retain) NSString * assetUuid;                            //@synthesize assetUuid=_assetUuid - In the implementation block
@property (assign,nonatomic) unsigned short currentQualityClass;              //@synthesize currentQualityClass=_currentQualityClass - In the implementation block
@property (assign,nonatomic) unsigned short desiredQualityClass;              //@synthesize desiredQualityClass=_desiredQualityClass - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(id)initWithProperties:(id)arg1 ;
-(NSString *)assetUuid;
-(id)initWithAssetUuid:(id)arg1 currentQualityClass:(unsigned short)arg2 desiredQualityClass:(unsigned short)arg3 ;
-(unsigned short)currentQualityClass;
-(unsigned short)desiredQualityClass;
-(id)identityHash;
-(id)serializeObject;
-(void)setAssetUuid:(NSString *)arg1 ;
-(void)setCurrentQualityClass:(unsigned short)arg1 ;
-(void)setDesiredQualityClass:(unsigned short)arg1 ;
-(id)mergeWithObject:(id)arg1 ;
@end

