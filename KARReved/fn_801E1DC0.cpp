//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801DC548.hpp"
#include "fn_801CA3F8.hpp"



void fn_801E1DC0(PPC::Runtime::GCContext* context)
{
/*801E1DC0 001DEBC0*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801E1DC4 001DEBC4*/ PPC::Runtime::ASM::mflr(context->r0);
/*801E1DC8 001DEBC8*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1CF8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801E1DCC 001DEBCC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801E1DD0 001DEBD0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801E1DD4 001DEBD4*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801E1DD8 001DEBD8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x798, context->r3));
/*801E1DDC 001DEBDC*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*801E1DE0 001DEBE0*/ PPC::Runtime::ASM::fcmpu(cr0, context->f1, context->f0);
/*801E1DE4 001DEBE4*/ PPC::Runtime::ASM::beq(.L_801E1E04);
/*801E1DE8 001DEBE8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc32, context->r31));
/* 801E1DEC 001DEBEC  54 00 D7 FF */ extrwi. context->r0 , context->r0 , 1 , 25
/*801E1DF0 001DEBF0*/ PPC::Runtime::ASM::bne(.L_801E1E04);
/*801E1DF4 001DEBF4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc34, context->r31));
/* 801E1DF8 001DEBF8  54 00 D7 FF */ extrwi. context->r0 , context->r0 , 1 , 25
/*801E1DFC 001DEBFC*/ PPC::Runtime::ASM::bne(.L_801E1E04);
/*801E1E00 001DEC00*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_801E1E04, 0x801E1E04) //this is a jump label
/*801E1E04 001DEC04*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801E1E08 001DEC08*/ PPC::Runtime::ASM::beq(.L_801E1E58);
/*801E1E0C 001DEC0C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc32, context->r31));
/* 801E1E10 001DEC10  54 00 E7 FF */ extrwi. context->r0 , context->r0 , 1 , 27
/*801E1E14 001DEC14*/ PPC::Runtime::ASM::bne(.L_801E1E4C);
/*801E1E18 001DEC18*/ PPC::Runtime::ASM::lwz(context->r3, STRUCT_BYTE4_COUNT_1805DD848 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801E1E1C 001DEC1C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x78c, context->r31));
/*801E1E20 001DEC20*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r3));
/*801E1E24 001DEC24*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*801E1E28 001DEC28*/ PPC::Runtime::ASM::ble(.L_801E1E3C);
/*801E1E2C 001DEC2C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801E1E30 001DEC30*/ PPC::Runtime::ASM::li(context->r4, 0x4);
/*801E1E34 001DEC34*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*801E1E38 001DEC38*/ PPC::Runtime::ASM::bl(fn_801DC548);
RUNTIME_PPC_JUMP_LABEL(.L_801E1E3C, 0x801E1E3C) //this is a jump label
/*801E1E3C 001DEC3C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc32, context->r31));
/*801E1E40 001DEC40*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*801E1E44 001DEC44*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 4, 27, 27);
/*801E1E48 001DEC48*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc32, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_801E1E4C, 0x801E1E4C) //this is a jump label
/*801E1E4C 001DEC4C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x504, context->r31));
/*801E1E50 001DEC50*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801E1E54 001DEC54*/ PPC::Runtime::ASM::bl(fn_801CA3F8);
RUNTIME_PPC_JUMP_LABEL(.L_801E1E58, 0x801E1E58) //this is a jump label
/*801E1E58 001DEC58*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801E1E5C 001DEC5C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801E1E60 001DEC60*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801E1E64 001DEC64*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801E1E68 001DEC68*/ PPC::Runtime::ASM::blr();
}