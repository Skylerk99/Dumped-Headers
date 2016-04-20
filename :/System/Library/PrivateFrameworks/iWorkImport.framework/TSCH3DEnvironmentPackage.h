/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:35 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface TSCH3DEnvironmentPackage : NSObject <NSCopying> {

	NSArray* _materials;

}
+(id)instanceWithArchive:(const Chart3DEnvironmentPackageArchive*)arg1 unarchiver:(id)arg2 ;
-(void)saveToArchive:(Chart3DEnvironmentPackageArchive*)arg1 archiver:(id)arg2 ;
-(id)initWithArchive:(const Chart3DEnvironmentPackageArchive*)arg1 unarchiver:(id)arg2 ;
-(void)didInitFromSOS;
-(void)addMaterial:(id)arg1 ;
-(id)materialEnumerator;
-(BOOL)hasCompleteData;
-(void)affect:(id)arg1 states:(id)arg2 scene:(id)arg3 texturePool:(id)arg4 ;
-(unsigned long long)materialCount;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

