/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:25 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPUnknownFieldTreeNode.h>

@interface TSPUnknownFieldTreeNodeWithChildren : TSPUnknownFieldTreeNode {

	map<int, TSPUnknownFieldTreeNode *, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, TSPUnknownFieldTreeNode *> > >* _children;

}
-(id)childNodeForFieldNumber:(int)arg1 ;
-(BOOL)addChildNode:(id)arg1 forFieldNumber:(int)arg2 ;
-(void)saveToArchiver:(id)arg1 message:(Message*)arg2 ;
@end

