/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:03 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSString, NSData, PLAdditionalAssetAttributes, PLPerson;

@interface PLPersonReference : PLManagedObject

@property (nonatomic,retain) NSString * personUUID; 
@property (nonatomic,retain) NSData * personData; 
@property (nonatomic,retain) PLAdditionalAssetAttributes * assetAttributes; 
@property (nonatomic,retain) PLPerson * person; 
+(id)entityName;
+(id)entityInManagedObjectContext:(id)arg1 ;
+(id)insertIntoPhotoLibrary:(id)arg1 personUUID:(id)arg2 personData:(id)arg3 ;
-(void)willSave;
@end

