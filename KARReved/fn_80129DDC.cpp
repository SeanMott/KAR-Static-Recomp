//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80112044.hpp"
#include "fn_getPlayerCount.hpp"
#include "fn_801147DC.hpp"
#include "fn_80129AFC.hpp"
#include "fn_80129AFC.hpp"
#include "fn_80114D9C.hpp"
#include "fn_80114E24.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"
#include "fn_GObj_GetJObjAtIndex_zzTOP.hpp"



void fn_80129DDC(PPC::Runtime::GCContext* context)
{
/*80129DDC 00126BDC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80129DE0 00126BE0*/ PPC::Runtime::ASM::mflr(context->r0);
/*80129DE4 00126BE4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80129DE8 00126BE8*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*80129DEC 00126BEC*/ PPC::Runtime::ASM::bl(_savegpr_27);
/*80129DF0 00126BF0*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*80129DF4 00126BF4*/ PPC::Runtime::ASM::bl(fn_80112044);
/*80129DF8 00126BF8*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80129DFC 00126BFC*/ PPC::Runtime::ASM::bl(fn_getPlayerCount);
/*80129E00 00126C00*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*80129E04 00126C04*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*80129E08 00126C08*/ PPC::Runtime::ASM::bne(.L_80129EF4);
/*80129E0C 00126C0C*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6e8, context->r30));
/*80129E10 00126C10*/ PPC::Runtime::ASM::b(.L_80129E18);
/*80129E14 00126C14*/ PPC::Runtime::ASM::b(.L_80129EF4);
RUNTIME_PPC_JUMP_LABEL(.L_80129E18, 0x80129E18) //this is a jump label
/*80129E18 00126C18*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*80129E1C 00126C1C*/ PPC::Runtime::ASM::li(context->r4, 0x1b);
/*80129E20 00126C20*/ PPC::Runtime::ASM::li(context->r5, 0x15);
/*80129E24 00126C24*/ PPC::Runtime::ASM::li(context->r6, 0x1);
/*80129E28 00126C28*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80129E2C 00126C2C*/ PPC::Runtime::ASM::bl(fn_801147DC);
/*80129E30 00126C30*/ PPC::Runtime::ASM::lis(context->r4, fn_80129AFC @ Get_MemoryOffset_HighBit);
/*80129E34 00126C34*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*80129E38 00126C38*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*80129E3C 00126C3C*/ PPC::Runtime::ASM::li(context->r5, 0x14);
/*80129E40 00126C40*/ PPC::Runtime::ASM::addi(context->r4, context->r4, fn_80129AFC @ Get_MemoryOffset_LowBit);
/*80129E44 00126C44*/ PPC::Runtime::ASM::bl(fn_804288A4);
/*80129E48 00126C48*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*80129E4C 00126C4C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80129E50 00126C50*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805DFFD8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80129E54 00126C54*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805DFFDC @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80129E58 00126C58*/ PPC::Runtime::ASM::bl(fn_80114D9C);
/*80129E5C 00126C5C*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80129E60 00126C60*/ PPC::Runtime::ASM::mr(context->r5, context->r27);
/*80129E64 00126C64*/ PPC::Runtime::ASM::li(context->r4, 0x46);
/*80129E68 00126C68*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*80129E6C 00126C6C*/ PPC::Runtime::ASM::bl(fn_80114E24);
/*80129E70 00126C70*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80129E74 00126C74*/ PPC::Runtime::ASM::li(context->r0, -0x1);
/*80129E78 00126C78*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*80129E7C 00126C7C*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80129E80 00126C80*/ PPC::Runtime::ASM::li(context->r4, 0x8);
/*80129E84 00126C84*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r31));
/*80129E88 00126C88*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r31));
/*80129E8C 00126C8C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
/*80129E90 00126C90*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r31));
/*80129E94 00126C94*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
/*80129E98 00126C98*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*80129E9C 00126C9C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r31));
/*80129EA0 00126CA0*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80129EA4 00126CA4*/ PPC::Runtime::ASM::li(context->r4, 0x7);
/*80129EA8 00126CA8*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*80129EAC 00126CAC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r31));
/*80129EB0 00126CB0*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80129EB4 00126CB4*/ PPC::Runtime::ASM::li(context->r4, 0x6);
/*80129EB8 00126CB8*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*80129EBC 00126CBC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
/*80129EC0 00126CC0*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80129EC4 00126CC4*/ PPC::Runtime::ASM::li(context->r4, 0x5);
/*80129EC8 00126CC8*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*80129ECC 00126CCC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r31));
/*80129ED0 00126CD0*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80129ED4 00126CD4*/ PPC::Runtime::ASM::li(context->r4, 0x4);
/*80129ED8 00126CD8*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*80129EDC 00126CDC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r31));
/*80129EE0 00126CE0*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80129EE4 00126CE4*/ PPC::Runtime::ASM::li(context->r4, 0x3);
/*80129EE8 00126CE8*/ PPC::Runtime::ASM::bl(fn_GObj_GetJObjAtIndex_zzTOP);
/*80129EEC 00126CEC*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*80129EF0 00126CF0*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6ec, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_80129EF4, 0x80129EF4) //this is a jump label
/*80129EF4 00126CF4*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*80129EF8 00126CF8*/ PPC::Runtime::ASM::bl(_restgpr_27);
/*80129EFC 00126CFC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80129F00 00126D00*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80129F04 00126D04*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80129F08 00126D08*/ PPC::Runtime::ASM::blr();
}