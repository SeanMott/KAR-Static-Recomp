//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_802040A8(PPC::Runtime::GCContext* context)
{
/*802040A8 00200EA8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*802040AC 00200EAC*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*802040B0 00200EB0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*802040B4 00200EB4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb08, context->r3));
/*802040B8 00200EB8*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r0, 30);
/*802040BC 00200EBC*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x2);
/*802040C0 00200EC0*/ PPC::Runtime::ASM::bne(.L_8020413C);
/*802040C4 00200EC4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*802040C8 00200EC8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*802040CC 00200ECC*/ PPC::Runtime::ASM::bge(.L_8020413C);
/*802040D0 00200ED0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*802040D4 00200ED4*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*802040D8 00200ED8*/ PPC::Runtime::ASM::ble(.L_802040E4);
/*802040DC 00200EDC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x48);
/*802040E0 00200EE0*/ PPC::Runtime::ASM::blt(.L_802040EC);
RUNTIME_PPC_JUMP_LABEL(.L_802040E4, 0x802040E4) //this is a jump label
/*802040E4 00200EE4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x4b);
/*802040E8 00200EE8*/ PPC::Runtime::ASM::bne(.L_8020413C);
RUNTIME_PPC_JUMP_LABEL(.L_802040EC, 0x802040EC) //this is a jump label
/*802040EC 00200EEC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r3));
/*802040F0 00200EF0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0xb);
/*802040F4 00200EF4*/ PPC::Runtime::ASM::bge(.L_8020410C);
/*802040F8 00200EF8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x9);
/*802040FC 00200EFC*/ PPC::Runtime::ASM::bge(.L_80204120);
/*80204100 00200F00*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80204104 00200F04*/ PPC::Runtime::ASM::bge(.L_80204118);
/*80204108 00200F08*/ PPC::Runtime::ASM::b(.L_80204128);
RUNTIME_PPC_JUMP_LABEL(.L_8020410C, 0x8020410C) //this is a jump label
/*8020410C 00200F0C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0xd);
/*80204110 00200F10*/ PPC::Runtime::ASM::beq(.L_80204120);
/*80204114 00200F14*/ PPC::Runtime::ASM::bge(.L_80204128);
RUNTIME_PPC_JUMP_LABEL(.L_80204118, 0x80204118) //this is a jump label
/*80204118 00200F18*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8020411C 00200F1C*/ PPC::Runtime::ASM::b(.L_8020412C);
RUNTIME_PPC_JUMP_LABEL(.L_80204120, 0x80204120) //this is a jump label
/*80204120 00200F20*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*80204124 00200F24*/ PPC::Runtime::ASM::b(.L_8020412C);
RUNTIME_PPC_JUMP_LABEL(.L_80204128, 0x80204128) //this is a jump label
/*80204128 00200F28*/ PPC::Runtime::ASM::li(context->r4, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8020412C, 0x8020412C) //this is a jump label
/*8020412C 00200F2C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb08, context->r3));
/* 80204130 00200F30  54 00 CF FF */ extrwi. context->r0 , context->r0 , 1 , 24
/*80204134 00200F34*/ PPC::Runtime::ASM::beq(.L_8020413C);
/*80204138 00200F38*/ PPC::Runtime::ASM::li(context->r4, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8020413C, 0x8020413C) //this is a jump label
/*8020413C 00200F3C*/ PPC::Runtime::ASM::xoris(context->r3, context->r4, 0x8000);
/*80204140 00200F40*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*80204144 00200F44*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80204148 00200F48*/ PPC::Runtime::ASM::lfd(context->f1, STRUCT_DOUBLE_COUNT_1805E2300 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8020414C 00200F4C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80204150 00200F50*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80204154 00200F54*/ PPC::Runtime::ASM::fsubs(context->f1, context->f0, context->f1);
/*80204158 00200F58*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8020415C 00200F5C*/ PPC::Runtime::ASM::blr();
}