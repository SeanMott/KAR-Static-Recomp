//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801C6C68.hpp"
#include "fn_vcLoadCommon.hpp"
#include "fn_setDamageMultiplier.hpp"
#include "fn_801C74E0.hpp"
#include "fn_801DFE94.hpp"
#include "fn_801E0308.hpp"



void fn_801C4EDC(PPC::Runtime::GCContext* context)
{
/*801C4EDC 001C1CDC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801C4EE0 001C1CE0*/ PPC::Runtime::ASM::mflr(context->r0);
/*801C4EE4 001C1CE4*/ PPC::Runtime::ASM::lis(context->r3, lbl_80559FB8 @ Get_MemoryOffset_HighBit);
/*801C4EE8 001C1CE8*/ PPC::Runtime::ASM::li(context->r4, 0x1bc0);
/*801C4EEC 001C1CEC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C4EF0 001C1CF0*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*801C4EF4 001C1CF4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801C4EF8 001C1CF8*/ PPC::Runtime::ASM::addi(context->r31, context->r3, lbl_80559FB8 @ Get_MemoryOffset_LowBit);
/*801C4EFC 001C1CFC*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x0);
/*801C4F00 001C1D00*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801C4F04 001C1D04*/ PPC::Runtime::ASM::bl(fn_HSD_ObjAllocInit);
/*801C4F08 001C1D08*/ PPC::Runtime::ASM::bl(fn_801C6C68);
/*801C4F0C 001C1D0C*/ PPC::Runtime::ASM::bl(fn_vcLoadCommon);
/*801C4F10 001C1D10*/ PPC::Runtime::ASM::bl(fn_setDamageMultiplier);
/*801C4F14 001C1D14*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x2c);
/*801C4F18 001C1D18*/ PPC::Runtime::ASM::li(context->r4, 0xc8);
/*801C4F1C 001C1D1C*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*801C4F20 001C1D20*/ PPC::Runtime::ASM::bl(fn_HSD_ObjAllocInit);
/*801C4F24 001C1D24*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x58);
/*801C4F28 001C1D28*/ PPC::Runtime::ASM::li(context->r4, 0x64);
/*801C4F2C 001C1D2C*/ PPC::Runtime::ASM::li(context->r5, 0x4);
/*801C4F30 001C1D30*/ PPC::Runtime::ASM::bl(fn_HSD_ObjAllocInit);
/*801C4F34 001C1D34*/ PPC::Runtime::ASM::bl(fn_801C74E0);
/*801C4F38 001C1D38*/ PPC::Runtime::ASM::li(context->r30, 0x0);
/*801C4F3C 001C1D3C*/ PPC::Runtime::ASM::li(context->r31, lbl_805D6F98 @ Get_MemoryOffset_SDA21);
RUNTIME_PPC_JUMP_LABEL(.L_801C4F40, 0x801C4F40) //this is a jump label
/*801C4F40 001C1D40*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*801C4F44 001C1D44*/ PPC::Runtime::ASM::lwz(context->r12, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*801C4F48 001C1D48*/ PPC::Runtime::ASM::cmplwi(context->r12, 0x0);
/*801C4F4C 001C1D4C*/ PPC::Runtime::ASM::beq(.L_801C4F58);
/*801C4F50 001C1D50*/ PPC::Runtime::ASM::mtctr(context->r12);
/*801C4F54 001C1D54*/ PPC::Runtime::ASM::bctrl();
RUNTIME_PPC_JUMP_LABEL(.L_801C4F58, 0x801C4F58) //this is a jump label
/*801C4F58 001C1D58*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x1);
/*801C4F5C 001C1D5C*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x4);
/*801C4F60 001C1D60*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x2);
/*801C4F64 001C1D64*/ PPC::Runtime::ASM::blt(.L_801C4F40);
/*801C4F68 001C1D68*/ PPC::Runtime::ASM::bl(fn_801DFE94);
/*801C4F6C 001C1D6C*/ PPC::Runtime::ASM::bl(fn_801E0308);
/*801C4F70 001C1D70*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*801C4F74 001C1D74*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DD830 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801C4F78 001C1D78*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DD82C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801C4F7C 001C1D7C*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DD834 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801C4F80 001C1D80*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801C4F84 001C1D84*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801C4F88 001C1D88*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801C4F8C 001C1D8C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801C4F90 001C1D90*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801C4F94 001C1D94*/ PPC::Runtime::ASM::blr();
}