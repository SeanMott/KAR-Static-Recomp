//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_gmGetGlobalP.hpp"
#include "fn_8000A498.hpp"
#include "fn_800064F0.hpp"
#include "fn_8005E5D0.hpp"
#include "fn_8005E788.hpp"
#include "fn_80071D7C.hpp"
#include "fn_8027780C.hpp"
#include "fn_80009BBC.hpp"
#include "fn_8000948C.hpp"
#include "fn_playSoundFX_menuSound.hpp"
#include "fn_80066B34.hpp"
#include "fn_800661FC.hpp"



void fn_80040D58(PPC::Runtime::GCContext* context)
{
/*80040D58 0003DB58*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80040D5C 0003DB5C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80040D60 0003DB60*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80040D64 0003DB64*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80040D68 0003DB68*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80040D6C 0003DB6C*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80040D70 0003DB70*/ PPC::Runtime::ASM::stw(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80040D74 0003DB74*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*80040D78 0003DB78*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*80040D7C 0003DB7C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x83c, context->r3));
/*80040D80 0003DB80*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80040D84 0003DB84*/ PPC::Runtime::ASM::blt(.L_80040DBC);
/*80040D88 0003DB88*/ PPC::Runtime::ASM::ble(.L_80040D94);
/*80040D8C 0003DB8C*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*80040D90 0003DB90*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x83c, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_80040D94, 0x80040D94) //this is a jump label
/*80040D94 0003DB94*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x83c, context->r30));
/*80040D98 0003DB98*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80040D9C 0003DB9C*/ PPC::Runtime::ASM::bne(.L_80040E5C);
/*80040DA0 0003DBA0*/ PPC::Runtime::ASM::li(context->r3, 0x100);
/*80040DA4 0003DBA4*/ PPC::Runtime::ASM::bl(fn_8000A498);
/*80040DA8 0003DBA8*/ PPC::Runtime::ASM::bl(fn_800064F0);
/*80040DAC 0003DBAC*/ PPC::Runtime::ASM::bl(fn_8005E5D0);
/*80040DB0 0003DBB0*/ PPC::Runtime::ASM::bl(fn_8005E788);
/*80040DB4 0003DBB4*/ PPC::Runtime::ASM::bl(fn_80071D7C);
/*80040DB8 0003DBB8*/ PPC::Runtime::ASM::b(.L_80040E5C);
RUNTIME_PPC_JUMP_LABEL(.L_80040DBC, 0x80040DBC) //this is a jump label
/*80040DBC 0003DBBC*/ PPC::Runtime::ASM::li(context->r28, 0x0);
/*80040DC0 0003DBC0*/ PPC::Runtime::ASM::bl(fn_8027780C);
/*80040DC4 0003DBC4*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80040DC8 0003DBC8*/ PPC::Runtime::ASM::beq(.L_80040DD4);
/*80040DCC 0003DBCC*/ PPC::Runtime::ASM::li(context->r28, 0x1);
/*80040DD0 0003DBD0*/ PPC::Runtime::ASM::b(.L_80040E30);
RUNTIME_PPC_JUMP_LABEL(.L_80040DD4, 0x80040DD4) //this is a jump label
/*80040DD4 0003DBD4*/ PPC::Runtime::ASM::bl(fn_80009BBC);
/*80040DD8 0003DBD8*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x4632);
/*80040DDC 0003DBDC*/ PPC::Runtime::ASM::blt(.L_80040DE8);
/*80040DE0 0003DBE0*/ PPC::Runtime::ASM::li(context->r28, 0x1);
/*80040DE4 0003DBE4*/ PPC::Runtime::ASM::b(.L_80040E30);
RUNTIME_PPC_JUMP_LABEL(.L_80040DE8, 0x80040DE8) //this is a jump label
/*80040DE8 0003DBE8*/ PPC::Runtime::ASM::lis(context->r3, Struct_PotenciallyAInputOneBasedOnWhatTheSpreadSheetSaysButItASkip @ Get_MemoryOffset_HighBit);
/*80040DEC 0003DBEC*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*80040DF0 0003DBF0*/ PPC::Runtime::ASM::addi(context->r31, context->r3, Struct_PotenciallyAInputOneBasedOnWhatTheSpreadSheetSaysButItASkip @ Get_MemoryOffset_LowBit);
RUNTIME_PPC_JUMP_LABEL(.L_80040DF4, 0x80040DF4) //this is a jump label
/*80040DF4 0003DBF4*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80040DF8 0003DBF8*/ PPC::Runtime::ASM::bl(fn_8000948C);
/*80040DFC 0003DBFC*/ PPC::Runtime::ASM::extsb.(context->r0, context->r3);
/*80040E00 0003DC00*/ PPC::Runtime::ASM::bne(.L_80040E24);
/*80040E04 0003DC04*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r29, 24);
/*80040E08 0003DC08*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0x44);
/*80040E0C 0003DC0C*/ PPC::Runtime::ASM::add(context->r3, context->r31, context->r0);
/*80040E10 0003DC10*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80040E14 0003DC14*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 19, 19);
/*80040E18 0003DC18*/ PPC::Runtime::ASM::beq(.L_80040E24);
/*80040E1C 0003DC1C*/ PPC::Runtime::ASM::bl(fn_playSoundFX_menuSound);
/*80040E20 0003DC20*/ PPC::Runtime::ASM::li(context->r28, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80040E24, 0x80040E24) //this is a jump label
/*80040E24 0003DC24*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x1);
/*80040E28 0003DC28*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x4);
/*80040E2C 0003DC2C*/ PPC::Runtime::ASM::blt(.L_80040DF4);
RUNTIME_PPC_JUMP_LABEL(.L_80040E30, 0x80040E30) //this is a jump label
/*80040E30 0003DC30*/ PPC::Runtime::ASM::cmpwi(context->r28, 0x0);
/*80040E34 0003DC34*/ PPC::Runtime::ASM::beq(.L_80040E5C);
/*80040E38 0003DC38*/ PPC::Runtime::ASM::li(context->r0, 0x1e);
/*80040E3C 0003DC3C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*80040E40 0003DC40*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x83c, context->r30));
/*80040E44 0003DC44*/ PPC::Runtime::ASM::bl(fn_80066B34);
/*80040E48 0003DC48*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80040E4C 0003DC4C*/ PPC::Runtime::ASM::beq(.L_80040E5C);
/*80040E50 0003DC50*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*80040E54 0003DC54*/ PPC::Runtime::ASM::li(context->r4, 0x1d);
/*80040E58 0003DC58*/ PPC::Runtime::ASM::bl(fn_800661FC);
RUNTIME_PPC_JUMP_LABEL(.L_80040E5C, 0x80040E5C) //this is a jump label
/*80040E5C 0003DC5C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80040E60 0003DC60*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80040E64 0003DC64*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80040E68 0003DC68*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80040E6C 0003DC6C*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80040E70 0003DC70*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80040E74 0003DC74*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80040E78 0003DC78*/ PPC::Runtime::ASM::blr();
}