#include "pebble_app_info.h"
#include "src/resource_ids.auto.h"

const PebbleAppInfo __pbl_app_info __attribute__ ((section (".pbl_header"))) = {
  .header = "PBLAPP",
  .struct_version = { APP_INFO_CURRENT_STRUCT_VERSION_MAJOR, APP_INFO_CURRENT_STRUCT_VERSION_MINOR },
  .sdk_version = { APP_INFO_CURRENT_SDK_VERSION_MAJOR, APP_INFO_CURRENT_SDK_VERSION_MINOR },
  .app_version = { 1, 0 },
  .load_size = 0xb6b6,
  .offset = 0xb6b6b6b6,
  .crc = 0xb6b6b6b6,
  .name = "ModernTeog",
  .company = "TeoG",
  .icon_resource_id = RESOURCE_ID_IMAGE_MENU_ICON,
  .sym_table_addr = 0xA7A7A7A7,
  .flags = APP_INFO_WATCH_FACE,
  .num_reloc_entries = 0xdeadcafe,
  .uuid = { 0x2C, 0xC1, 0x67, 0x2B, 0x7D, 0x6F, 0x41, 0xE7, 0x9D, 0xB8, 0xAB, 0xF0, 0x9A, 0xBA, 0x37, 0x74 },
  .virtual_size = 0xb6b6
};
