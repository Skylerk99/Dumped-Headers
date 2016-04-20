/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:55:39 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@class NSMapTable, NSLock, VKPShieldPack;

@interface VKShieldAtlas : NSObject {

	NSMapTable* _atlasToImages;
	NSLock* _atlasToImagesLock;
	VKPShieldPack* _shieldPack;

}
-(void)dealloc;
-(void)purge;
-(id)initWithShieldPack:(id)arg1 ;
-(id)artworkForShieldIdentifier:(id)arg1 textLength:(unsigned long long)arg2 contentScale:(double)arg3 size:(long long)arg4 numberOfLines:(unsigned long long)arg5 genericShieldGenerator:(id)arg6 colors:(SCD_Struct_VK81*)arg7 ;
@end

