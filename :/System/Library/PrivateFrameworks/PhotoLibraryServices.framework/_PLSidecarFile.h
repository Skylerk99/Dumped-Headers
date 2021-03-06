/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:02 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSString, NSNumber, NSDate, PLManagedAsset;

@interface _PLSidecarFile : PLManagedObject

@property (nonatomic,retain) NSString * originalFilename; 
@property (nonatomic,retain) NSNumber * index; 
@property (assign) short indexValue; 
@property (nonatomic,retain) NSDate * captureDate; 
@property (nonatomic,retain) NSDate * modificationDate; 
@property (nonatomic,retain) NSString * filename; 
@property (nonatomic,retain) NSString * uniformTypeIdentifier; 
@property (nonatomic,retain) NSNumber * compressedSize; 
@property (assign) int compressedSizeValue; 
@property (nonatomic,retain) PLManagedAsset * asset; 
+(id)entityName;
+(id)entityInManagedObjectContext:(id)arg1 ;
+(id)insertInManagedObjectContext:(id)arg1 ;
+(id)keyPathsForValuesAffectingValueForKey:(id)arg1 ;
-(void)setIndexValue:(short)arg1 ;
-(short)indexValue;
-(short)primitiveIndexValue;
-(void)setPrimitiveIndexValue:(short)arg1 ;
-(int)compressedSizeValue;
-(void)setCompressedSizeValue:(int)arg1 ;
-(int)primitiveCompressedSizeValue;
-(void)setPrimitiveCompressedSizeValue:(int)arg1 ;
@end

