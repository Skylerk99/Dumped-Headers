/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:04 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSupport/MapsSupport-Structs.h>
#import <libobjc.A.dylib/MSPFavorite.h>
#import <libobjc.A.dylib/MSPMutableObject.h>

@class NSUUID, MSPBookmarkStorage, NSString;

@interface MSPMutableFavorite : NSObject <MSPFavorite, MSPMutableObject> {

	NSUUID* _storageIdentifier;
	MSPBookmarkStorage* _bookmarkStorage;

}

@property (nonatomic,readonly) MSPBookmarkStorage * bookmarkStorage;              //@synthesize bookmarkStorage=_bookmarkStorage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)mutableFavoriteForBookmarkStorage:(id)arg1 ;
+(Class)immutableObjectClass;
+(id)immutableObjectProtocol;
+(Class)mutableObjectClass;
+(id)mutableObjectProtocol;
-(id)abridgedBookmarkStorageForSpotlightStorage;
-(id)init;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)initWithBookmarkStorage:(id)arg1 ;
-(id)transferToImmutableWithError:(out id*)arg1 ;
-(MSPBookmarkStorage *)bookmarkStorage;
-(id)persisterOnlyBookmarkStorage;
-(id)storageIdentifier;
-(void)ifMutablePlace:(/*^block*/id)arg1 ifMutableRoute:(/*^block*/id)arg2 ifMutableRegion:(/*^block*/id)arg3 ;
-(void)ifPlace:(/*^block*/id)arg1 ifRoute:(/*^block*/id)arg2 ifRegion:(/*^block*/id)arg3 ;
@end

