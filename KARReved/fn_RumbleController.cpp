//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_RumbleController(PPC::Runtime::GCContext* context)
{
/*80071D00 0006EB00*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80071D04 0006EB04*/ PPC::Runtime::ASM::mflr(context->r0);
/*80071D08 0006EB08*/ PPC::Runtime::ASM::cmpwi(context->r6, 0x0);
/*80071D0C 0006EB0C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80071D10 0006EB10*/ PPC::Runtime::ASM::li(context->r0, -0x2);
/*80071D14 0006EB14*/ PPC::Runtime::ASM::beq(.L_80071D1C);
/*80071D18 0006EB18*/ PPC::Runtime::ASM::mr(context->r0, context->r6);
RUNTIME_PPC_JUMP_LABEL(.L_80071D1C, 0x80071D1C) //this is a jump label
/*80071D1C 0006EB1C*/ PPC::Runtime::ASM::lwz(context->r7, STRUCT_BYTE4_COUNT_1805DD5C8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80071D20 0006EB20*/ PPC::Runtime::ASM::slwi(context->r6, context->r5, 3);
/*80071D24 0006EB24*/ PPC::Runtime::ASM::add(context->r5, context->r7, context->r6);
/*80071D28 0006EB28*/ PPC::Runtime::ASM::lwzx(context->r7, context->r7, context->r6);
/*80071D2C 0006EB2C*/ PPC::Runtime::ASM::lbz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r5));
/*80071D30 0006EB30*/ PPC::Runtime::ASM::mr(context->r5, context->r0);
/*80071D34 0006EB34*/ PPC::Runtime::ASM::bl(fn_HSD_PadRumbleActiveId);
/*80071D38 0006EB38*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80071D3C 0006EB3C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80071D40 0006EB40*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80071D44 0006EB44*/ PPC::Runtime::ASM::blr();
}