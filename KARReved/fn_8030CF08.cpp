//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8034D1F8.hpp"
#include "fn_802E498C.hpp"



void fn_8030CF08(PPC::Runtime::GCContext* context)
{
/*8030CF08 00309D08*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8030CF0C 00309D0C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8030CF10 00309D10*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8030CF14 00309D14*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8030CF18 00309D18*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8030CF1C 00309D1C*/ PPC::Runtime::ASM::bl(fn_8034D1F8);
/*8030CF20 00309D20*/ PPC::Runtime::ASM::mr(context->r4, context->r3);
/*8030CF24 00309D24*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8030CF28 00309D28*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x70);
/*8030CF2C 00309D2C*/ PPC::Runtime::ASM::bl(fn_802E498C);
/*8030CF30 00309D30*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8030CF34 00309D34*/ PPC::Runtime::ASM::lis(context->r0, 0x4330);
/*8030CF38 00309D38*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8030CF3C 00309D3C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r3));
/*8030CF40 00309D40*/ PPC::Runtime::ASM::lfd(context->f2, STRUCT_DOUBLE_COUNT_1805E3D60 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8030CF44 00309D44*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8030CF48 00309D48*/ PPC::Runtime::ASM::lfd(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8030CF4C 00309D4C*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f2);
/*8030CF50 00309D50*/ PPC::Runtime::ASM::fcmpo(cr0, context->f0, context->f1);
/*8030CF54 00309D54*/ PPC::Runtime::ASM::cror(eq, gt, eq);
/*8030CF58 00309D58*/ PPC::Runtime::ASM::mfcr(context->r0);
/*8030CF5C 00309D5C*/ PPC::Runtime::ASM::extrwi(context->r3, context->r0, 1, 2);
/*8030CF60 00309D60*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8030CF64 00309D64*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8030CF68 00309D68*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8030CF6C 00309D6C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8030CF70 00309D70*/ PPC::Runtime::ASM::blr();
}