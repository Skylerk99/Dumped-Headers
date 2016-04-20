/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:10 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, UIColor;

@interface CAIAANodeInfo : NSObject {

	NSMutableArray* nodeList;
	UIColor* labelColor;

}

@property (readonly) unsigned long long numNodes; 
@property (retain) UIColor * labelColor; 
-(unsigned long long)numNodes;
-(void)createNodeList;
-(id)nodeWithNodeInfo:(id)arg1 ;
-(UIColor *)labelColor;
-(id)init;
-(void)setLabelColor:(UIColor *)arg1 ;
-(id)nodeAtIndex:(unsigned long long)arg1 ;
-(void)refresh;
@end

