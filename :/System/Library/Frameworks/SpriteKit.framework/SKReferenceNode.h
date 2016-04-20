/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:48:35 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKNode.h>

@class NSURL, NSString, SKNode;

@interface SKReferenceNode : SKNode {

	NSURL* _referenceURL;
	NSString* _referenceFileName;
	SKNode* _resolvedNode;
	BOOL _hasResolvedURL;

}

@property (nonatomic,retain) NSString * referenceFileName; 
@property (nonatomic,retain) NSURL * referenceURL; 
+(id)referenceNodeWithURL:(id)arg1 ;
+(id)referenceNodeWithFileNamed:(id)arg1 ;
-(id)initWithFileNamed:(id)arg1 ;
-(void)setReferenceURL:(NSURL *)arg1 ;
-(NSURL *)referenceURL;
-(void)setReferenceFileName:(NSString *)arg1 ;
-(NSString *)referenceFileName;
-(void)resolveReferenceNode;
-(void)didLoadReferenceNode:(id)arg1 ;
-(id)_resolveReferenceNode;
-(id)resolvedNode;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithURL:(id)arg1 ;
@end

