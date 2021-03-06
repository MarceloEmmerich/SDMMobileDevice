//
//  MDDemoDeviceTable.h
//  SDM_MD_Demo
//
//  Created by Sam Marshall on 6/26/13.
//  Copyright 2013 Sam Marshall. All rights reserved.
//

#import <Cocoa/Cocoa.h>


@interface MDDemoDeviceTable : NSView <NSTableViewDelegate, NSTableViewDataSource> {}

@property (nonatomic, retain) NSTableView *deviceTable;
@property (nonatomic, retain) NSArray *dataSource;

- (id)initWithFrame:(NSRect)frame;

- (void)updateDevices;

#pragma mark -
#pragma mark NSTableViewDelegate + NSTableViewDataSource
- (NSInteger)numberOfRowsInTableView:(NSTableView *)tableView;
- (id)tableView:(NSTableView *)aTableView objectValueForTableColumn:(NSTableColumn *)aTableColumn row:(NSInteger)rowIndex;

@end
