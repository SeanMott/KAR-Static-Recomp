//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_gmGetGlobalP.hpp"
#include "fn_8007859C.hpp"
#include "fn_80077F14.hpp"
#include "fn_800780D0.hpp"
#include "fn_800064F0.hpp"
#include "fn_menu_getCurrentMenuID.hpp"
#include "fn_8000A498.hpp"
#include "fn_playSoundFX_menuSound.hpp"
#include "fn_80078284.hpp"
#include "fn_8000A498.hpp"
#include "fn_CSS_playerQuit.hpp"
#include "fn_80078284.hpp"
#include "fn_8000A498.hpp"
#include "fn_playSoundFX_menuSound.hpp"
#include "fn_80078284.hpp"



void fn_8000D930(PPC::Runtime::GCContext* context)
{
/*8000D930 0000A730*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8000D934 0000A734*/ PPC::Runtime::ASM::mflr(context->r0);
/*8000D938 0000A738*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8000D93C 0000A73C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8000D940 0000A740*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*8000D944 0000A744*/ PPC::Runtime::ASM::bl(fn_8007859C);
/*8000D948 0000A748*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD560 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8000D94C 0000A74C*/ PPC::Runtime::ASM::bl(fn_80077F14);
/*8000D950 0000A750*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*8000D954 0000A754*/ PPC::Runtime::ASM::bne(.L_8000D970);
/*8000D958 0000A758*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD560 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8000D95C 0000A75C*/ PPC::Runtime::ASM::bl(fn_800780D0);
/*8000D960 0000A760*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8000D964 0000A764*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DD560 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8000D968 0000A768*/ PPC::Runtime::ASM::bl(fn_800064F0);
/*8000D96C 0000A76C*/ PPC::Runtime::ASM::b(.L_8000DA20);
RUNTIME_PPC_JUMP_LABEL(.L_8000D970, 0x8000D970) //this is a jump label
/*8000D970 0000A770*/ PPC::Runtime::ASM::li(context->r31, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8000D974, 0x8000D974) //this is a jump label
/*8000D974 0000A774*/ PPC::Runtime::ASM::bl(fn_menu_getCurrentMenuID);
/*8000D978 0000A778*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*8000D97C 0000A77C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x3);
/*8000D980 0000A780*/ PPC::Runtime::ASM::bne(.L_8000D9DC);
/*8000D984 0000A784*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r31, 24);
/*8000D988 0000A788*/ PPC::Runtime::ASM::lis(context->r3, Struct_PotenciallyAInputOneBasedOnWhatTheSpreadSheetSaysButItASkip @ Get_MemoryOffset_HighBit);
/*8000D98C 0000A78C*/ PPC::Runtime::ASM::mulli(context->r4, context->r0, 0x44);
/*8000D990 0000A790*/ PPC::Runtime::ASM::addi(context->r0, context->r3, Struct_PotenciallyAInputOneBasedOnWhatTheSpreadSheetSaysButItASkip @ Get_MemoryOffset_LowBit);
/*8000D994 0000A794*/ PPC::Runtime::ASM::add(context->r3, context->r0, context->r4);
/*8000D998 0000A798*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*8000D99C 0000A79C*/ PPC::Runtime::ASM::andi.(context->r0, context->r3, 0x1d60);
/*8000D9A0 0000A7A0*/ PPC::Runtime::ASM::beq(.L_8000D9BC);
/*8000D9A4 0000A7A4*/ PPC::Runtime::ASM::li(context->r3, 0x100);
/*8000D9A8 0000A7A8*/ PPC::Runtime::ASM::bl(fn_8000A498);
/*8000D9AC 0000A7AC*/ PPC::Runtime::ASM::bl(fn_playSoundFX_menuSound);
/*8000D9B0 0000A7B0*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD560 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8000D9B4 0000A7B4*/ PPC::Runtime::ASM::bl(fn_80078284);
/*8000D9B8 0000A7B8*/ PPC::Runtime::ASM::b(.L_8000DA20);
RUNTIME_PPC_JUMP_LABEL(.L_8000D9BC, 0x8000D9BC) //this is a jump label
/*8000D9BC 0000A7BC*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r3, 0, 22, 22);
/*8000D9C0 0000A7C0*/ PPC::Runtime::ASM::beq(.L_8000DA14);
/*8000D9C4 0000A7C4*/ PPC::Runtime::ASM::li(context->r3, 0x100);
/*8000D9C8 0000A7C8*/ PPC::Runtime::ASM::bl(fn_8000A498);
/*8000D9CC 0000A7CC*/ PPC::Runtime::ASM::bl(fn_CSS_playerQuit);
/*8000D9D0 0000A7D0*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD560 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8000D9D4 0000A7D4*/ PPC::Runtime::ASM::bl(fn_80078284);
/*8000D9D8 0000A7D8*/ PPC::Runtime::ASM::b(.L_8000DA20);
RUNTIME_PPC_JUMP_LABEL(.L_8000D9DC, 0x8000D9DC) //this is a jump label
/*8000D9DC 0000A7DC*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r31, 24);
/*8000D9E0 0000A7E0*/ PPC::Runtime::ASM::lis(context->r3, Struct_PotenciallyAInputOneBasedOnWhatTheSpreadSheetSaysButItASkip @ Get_MemoryOffset_HighBit);
/*8000D9E4 0000A7E4*/ PPC::Runtime::ASM::mulli(context->r4, context->r0, 0x44);
/*8000D9E8 0000A7E8*/ PPC::Runtime::ASM::addi(context->r0, context->r3, Struct_PotenciallyAInputOneBasedOnWhatTheSpreadSheetSaysButItASkip @ Get_MemoryOffset_LowBit);
/*8000D9EC 0000A7EC*/ PPC::Runtime::ASM::add(context->r3, context->r0, context->r4);
/*8000D9F0 0000A7F0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*8000D9F4 0000A7F4*/ PPC::Runtime::ASM::andi.(context->r0, context->r0, 0x1100);
/*8000D9F8 0000A7F8*/ PPC::Runtime::ASM::beq(.L_8000DA14);
/*8000D9FC 0000A7FC*/ PPC::Runtime::ASM::li(context->r3, 0x100);
/*8000DA00 0000A800*/ PPC::Runtime::ASM::bl(fn_8000A498);
/*8000DA04 0000A804*/ PPC::Runtime::ASM::bl(fn_playSoundFX_menuSound);
/*8000DA08 0000A808*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD560 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8000DA0C 0000A80C*/ PPC::Runtime::ASM::bl(fn_80078284);
/*8000DA10 0000A810*/ PPC::Runtime::ASM::b(.L_8000DA20);
RUNTIME_PPC_JUMP_LABEL(.L_8000DA14, 0x8000DA14) //this is a jump label
/*8000DA14 0000A814*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x1);
/*8000DA18 0000A818*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x4);
/*8000DA1C 0000A81C*/ PPC::Runtime::ASM::blt(.L_8000D974);
RUNTIME_PPC_JUMP_LABEL(.L_8000DA20, 0x8000DA20) //this is a jump label
/*8000DA20 0000A820*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8000DA24 0000A824*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8000DA28 0000A828*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8000DA2C 0000A82C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8000DA30 0000A830*/ PPC::Runtime::ASM::blr();
}