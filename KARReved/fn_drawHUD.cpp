//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80116AC0.hpp"
#include "fn_80117B28.hpp"
#include "fn_80118254.hpp"
#include "fn_80119490.hpp"
#include "fn_80119CF8.hpp"
#include "fn_8011A138.hpp"
#include "fn_8011A674.hpp"
#include "fn_8011B22C.hpp"
#include "fn_8011F754.hpp"
#include "fn_8011FFFC.hpp"
#include "fn_8011B994.hpp"
#include "fn_8011E868.hpp"
#include "fn_8011BEA4.hpp"
#include "fn_8011C1F8.hpp"
#include "fn_8011C6D8.hpp"
#include "fn_8011CB68.hpp"
#include "fn_80121178.hpp"
#include "fn_80122CD0.hpp"
#include "fn_80122FC8.hpp"
#include "fn_8012358C.hpp"
#include "fn_80125DF0.hpp"
#include "fn_80123B38.hpp"
#include "fn_80123EF8.hpp"
#include "fn_801243C4.hpp"
#include "fn_8012A3B0.hpp"
#include "fn_80130C50.hpp"
#include "fn_8012D3AC.hpp"
#include "fn_801219F4.hpp"
#include "fn_80122320.hpp"
#include "fn_80126C4C.hpp"
#include "fn_80127A4C.hpp"
#include "fn_801265B8.hpp"
#include "fn_801308F8.hpp"
#include "fn_80130AA4.hpp"
#include "fn_80130EEC.hpp"
#include "fn_8012B798.hpp"
#include "fn_8012C578.hpp"
#include "fn_8012DCB0.hpp"
#include "fn_8012EB0C.hpp"
#include "fn_8012ECB8.hpp"
#include "fn_8012F084.hpp"
#include "fn_8012F4C4.hpp"
#include "fn_8012F9AC.hpp"
#include "fn_8012FEB0.hpp"
#include "fn_801301D4.hpp"
#include "fn_8012AB18.hpp"
#include "fn_80118EF0.hpp"
#include "fn_80124B28.hpp"
#include "fn_8011D114.hpp"
#include "fn_8011E354.hpp"
#include "fn_8012506C.hpp"
#include "fn_8012532C.hpp"
#include "fn_drawHUD_renderMap.hpp"
#include "fn_drawHUD_renderPlayerDot.hpp"
#include "fn_8011CEDC.hpp"
#include "fn_80125700.hpp"
#include "fn_80126310.hpp"
#include "fn_80127624.hpp"
#include "fn_8012A02C.hpp"



void fn_drawHUD(PPC::Runtime::GCContext* context)
{
/*80112464 0010F264*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80112468 0010F268*/ PPC::Runtime::ASM::mflr(context->r0);
/*8011246C 0010F26C*/ PPC::Runtime::ASM::lis(context->r3, lbl_805578B8 @ Get_MemoryOffset_HighBit);
/*80112470 0010F270*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80112474 0010F274*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80112478 0010F278*/ PPC::Runtime::ASM::addi(context->r31, context->r3, lbl_805578B8 @ Get_MemoryOffset_LowBit);
/*8011247C 0010F27C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80112480 0010F280*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80112484 0010F284*/ PPC::Runtime::ASM::li(context->r29, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80112488, 0x80112488) //this is a jump label
/*80112488 0010F288*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8011248C 0010F28C*/ PPC::Runtime::ASM::bl(fn_80116AC0);
/*80112490 0010F290*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80112494 0010F294*/ PPC::Runtime::ASM::bl(fn_80117B28);
/*80112498 0010F298*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8011249C 0010F29C*/ PPC::Runtime::ASM::bl(fn_80118254);
/*801124A0 0010F2A0*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*801124A4 0010F2A4*/ PPC::Runtime::ASM::bl(fn_80119490);
/*801124A8 0010F2A8*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*801124AC 0010F2AC*/ PPC::Runtime::ASM::bl(fn_80119CF8);
/*801124B0 0010F2B0*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*801124B4 0010F2B4*/ PPC::Runtime::ASM::bl(fn_8011A138);
/*801124B8 0010F2B8*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*801124BC 0010F2BC*/ PPC::Runtime::ASM::bl(fn_8011A674);
/*801124C0 0010F2C0*/ PPC::Runtime::ASM::li(context->r30, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_801124C4, 0x801124C4) //this is a jump label
/*801124C4 0010F2C4*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*801124C8 0010F2C8*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*801124CC 0010F2CC*/ PPC::Runtime::ASM::bl(fn_8011B22C);
/*801124D0 0010F2D0*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x1);
/*801124D4 0010F2D4*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x3);
/*801124D8 0010F2D8*/ PPC::Runtime::ASM::blt(.L_801124C4);
/*801124DC 0010F2DC*/ PPC::Runtime::ASM::li(context->r30, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_801124E0, 0x801124E0) //this is a jump label
/*801124E0 0010F2E0*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*801124E4 0010F2E4*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*801124E8 0010F2E8*/ PPC::Runtime::ASM::bl(fn_8011F754);
/*801124EC 0010F2EC*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*801124F0 0010F2F0*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*801124F4 0010F2F4*/ PPC::Runtime::ASM::bl(fn_8011FFFC);
/*801124F8 0010F2F8*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x1);
/*801124FC 0010F2FC*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x5);
/*80112500 0010F300*/ PPC::Runtime::ASM::blt(.L_801124E0);
/*80112504 0010F304*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80112508 0010F308*/ PPC::Runtime::ASM::bl(fn_8011B994);
/*8011250C 0010F30C*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80112510 0010F310*/ PPC::Runtime::ASM::bl(fn_8011E868);
/*80112514 0010F314*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80112518 0010F318*/ PPC::Runtime::ASM::bl(fn_8011BEA4);
/*8011251C 0010F31C*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80112520 0010F320*/ PPC::Runtime::ASM::bl(fn_8011C1F8);
/*80112524 0010F324*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80112528 0010F328*/ PPC::Runtime::ASM::bl(fn_8011C6D8);
/*8011252C 0010F32C*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80112530 0010F330*/ PPC::Runtime::ASM::bl(fn_8011CB68);
/*80112534 0010F334*/ PPC::Runtime::ASM::li(context->r30, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80112538, 0x80112538) //this is a jump label
/*80112538 0010F338*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8011253C 0010F33C*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*80112540 0010F340*/ PPC::Runtime::ASM::bl(fn_80121178);
/*80112544 0010F344*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x1);
/*80112548 0010F348*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x20);
/*8011254C 0010F34C*/ PPC::Runtime::ASM::blt(.L_80112538);
/*80112550 0010F350*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80112554 0010F354*/ PPC::Runtime::ASM::bl(fn_80122CD0);
/*80112558 0010F358*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8011255C 0010F35C*/ PPC::Runtime::ASM::bl(fn_80122FC8);
/*80112560 0010F360*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80112564 0010F364*/ PPC::Runtime::ASM::bl(fn_8012358C);
/*80112568 0010F368*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8011256C 0010F36C*/ PPC::Runtime::ASM::bl(fn_80125DF0);
/*80112570 0010F370*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80112574 0010F374*/ PPC::Runtime::ASM::bl(fn_80123B38);
/*80112578 0010F378*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8011257C 0010F37C*/ PPC::Runtime::ASM::bl(fn_80123EF8);
/*80112580 0010F380*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80112584 0010F384*/ PPC::Runtime::ASM::bl(fn_801243C4);
/*80112588 0010F388*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8011258C 0010F38C*/ PPC::Runtime::ASM::bl(fn_8012A3B0);
/*80112590 0010F390*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80112594 0010F394*/ PPC::Runtime::ASM::bl(fn_80130C50);
/*80112598 0010F398*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8011259C 0010F39C*/ PPC::Runtime::ASM::bl(fn_8012D3AC);
/*801125A0 0010F3A0*/ PPC::Runtime::ASM::li(context->r30, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_801125A4, 0x801125A4) //this is a jump label
/*801125A4 0010F3A4*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*801125A8 0010F3A8*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*801125AC 0010F3AC*/ PPC::Runtime::ASM::bl(fn_801219F4);
/*801125B0 0010F3B0*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x1);
/*801125B4 0010F3B4*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x20);
/*801125B8 0010F3B8*/ PPC::Runtime::ASM::blt(.L_801125A4);
/*801125BC 0010F3BC*/ PPC::Runtime::ASM::bl(fn_80122320);
/*801125C0 0010F3C0*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*801125C4 0010F3C4*/ PPC::Runtime::ASM::bl(fn_80126C4C);
/*801125C8 0010F3C8*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*801125CC 0010F3CC*/ PPC::Runtime::ASM::bl(fn_80127A4C);
/*801125D0 0010F3D0*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*801125D4 0010F3D4*/ PPC::Runtime::ASM::bl(fn_801265B8);
/*801125D8 0010F3D8*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*801125DC 0010F3DC*/ PPC::Runtime::ASM::bl(fn_801308F8);
/*801125E0 0010F3E0*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*801125E4 0010F3E4*/ PPC::Runtime::ASM::bl(fn_80130AA4);
/*801125E8 0010F3E8*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*801125EC 0010F3EC*/ PPC::Runtime::ASM::bl(fn_80130EEC);
/*801125F0 0010F3F0*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*801125F4 0010F3F4*/ PPC::Runtime::ASM::bl(fn_8012B798);
/*801125F8 0010F3F8*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*801125FC 0010F3FC*/ PPC::Runtime::ASM::bl(fn_8012C578);
/*80112600 0010F400*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80112604 0010F404*/ PPC::Runtime::ASM::bl(fn_8012DCB0);
/*80112608 0010F408*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8011260C 0010F40C*/ PPC::Runtime::ASM::bl(fn_8012EB0C);
/*80112610 0010F410*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80112614 0010F414*/ PPC::Runtime::ASM::bl(fn_8012ECB8);
/*80112618 0010F418*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8011261C 0010F41C*/ PPC::Runtime::ASM::bl(fn_8012F084);
/*80112620 0010F420*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80112624 0010F424*/ PPC::Runtime::ASM::bl(fn_8012F4C4);
/*80112628 0010F428*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8011262C 0010F42C*/ PPC::Runtime::ASM::bl(fn_8012F9AC);
/*80112630 0010F430*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80112634 0010F434*/ PPC::Runtime::ASM::bl(fn_8012FEB0);
/*80112638 0010F438*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*8011263C 0010F43C*/ PPC::Runtime::ASM::bl(fn_801301D4);
/*80112640 0010F440*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80112644 0010F444*/ PPC::Runtime::ASM::bl(fn_8012AB18);
/*80112648 0010F448*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
/*8011264C 0010F44C*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x4);
/*80112650 0010F450*/ PPC::Runtime::ASM::blt(.L_80112488);
/*80112654 0010F454*/ PPC::Runtime::ASM::bl(fn_80118EF0);
/*80112658 0010F458*/ PPC::Runtime::ASM::li(context->r30, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8011265C, 0x8011265C) //this is a jump label
/*8011265C 0010F45C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*80112660 0010F460*/ PPC::Runtime::ASM::bl(fn_80124B28);
/*80112664 0010F464*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x1);
/*80112668 0010F468*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x4);
/*8011266C 0010F46C*/ PPC::Runtime::ASM::blt(.L_8011265C);
/*80112670 0010F470*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80112674 0010F474*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*80112678 0010F478*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*8011267C 0010F47C*/ PPC::Runtime::ASM::bgt(.L_80112690);
/*80112680 0010F480*/ PPC::Runtime::ASM::bl(fn_8011D114);
/*80112684 0010F484*/ PPC::Runtime::ASM::bl(fn_8011E354);
/*80112688 0010F488*/ PPC::Runtime::ASM::bl(fn_8012506C);
/*8011268C 0010F48C*/ PPC::Runtime::ASM::bl(fn_8012532C);
RUNTIME_PPC_JUMP_LABEL(.L_80112690, 0x80112690) //this is a jump label
/*80112690 0010F490*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80112694 0010F494*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*80112698 0010F498*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*8011269C 0010F49C*/ PPC::Runtime::ASM::ble(.L_801126A8);
/*801126A0 0010F4A0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*801126A4 0010F4A4*/ PPC::Runtime::ASM::bne(.L_801126C4);
RUNTIME_PPC_JUMP_LABEL(.L_801126A8, 0x801126A8) //this is a jump label
/*801126A8 0010F4A8*/ PPC::Runtime::ASM::bl(fn_drawHUD_renderMap);
/*801126AC 0010F4AC*/ PPC::Runtime::ASM::li(context->r31, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_801126B0, 0x801126B0) //this is a jump label
/*801126B0 0010F4B0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801126B4 0010F4B4*/ PPC::Runtime::ASM::bl(fn_drawHUD_renderPlayerDot);
/*801126B8 0010F4B8*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x1);
/*801126BC 0010F4BC*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x5);
/*801126C0 0010F4C0*/ PPC::Runtime::ASM::blt(.L_801126B0);
RUNTIME_PPC_JUMP_LABEL(.L_801126C4, 0x801126C4) //this is a jump label
/*801126C4 0010F4C4*/ PPC::Runtime::ASM::bl(fn_8011CEDC);
/*801126C8 0010F4C8*/ PPC::Runtime::ASM::bl(fn_80125700);
/*801126CC 0010F4CC*/ PPC::Runtime::ASM::bl(fn_80126310);
/*801126D0 0010F4D0*/ PPC::Runtime::ASM::bl(fn_80127624);
/*801126D4 0010F4D4*/ PPC::Runtime::ASM::bl(fn_8012A02C);
/*801126D8 0010F4D8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801126DC 0010F4DC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801126E0 0010F4E0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801126E4 0010F4E4*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801126E8 0010F4E8*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801126EC 0010F4EC*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*801126F0 0010F4F0*/ PPC::Runtime::ASM::blr();
}