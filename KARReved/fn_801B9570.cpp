//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_801B9570(PPC::Runtime::GCContext* context)
{
/*801B9570 001B6370*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*801B9574 001B6374*/ PPC::Runtime::ASM::mflr(context->r0);
/*801B9578 001B6378*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801B957C 001B637C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801B9580 001B6380*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801B9584 001B6384*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c0, context->r3));
/* 801B9588 001B6388  54 00 CF FF */ extrwi. context->r0 , context->r0 , 1 , 24
/*801B958C 001B638C*/ PPC::Runtime::ASM::bne(.L_801B960C);
/*801B9590 001B6390*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x300, context->r31));
/*801B9594 001B6394*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*801B9598 001B6398*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9b4, context->r31));
/*801B959C 001B639C*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*801B95A0 001B63A0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801B95A4 001B63A4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x304, context->r31));
/*801B95A8 001B63A8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9b8, context->r31));
/*801B95AC 001B63AC*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*801B95B0 001B63B0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801B95B4 001B63B4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x308, context->r31));
/*801B95B8 001B63B8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9bc, context->r31));
/*801B95BC 001B63BC*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*801B95C0 001B63C0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801B95C4 001B63C4*/ PPC::Runtime::ASM::bl(fn_803D2158);
/*801B95C8 001B63C8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801B95CC 001B63CC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801B95D0 001B63D0*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f1);
/*801B95D4 001B63D4*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801B95D8 001B63D8*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f0);
/*801B95DC 001B63DC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38c, context->r31));
/*801B95E0 001B63E0*/ PPC::Runtime::ASM::fmuls(context->f2, context->f2, context->f2);
/*801B95E4 001B63E4*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r3));
/*801B95E8 001B63E8*/ PPC::Runtime::ASM::fadds(context->f1, context->f1, context->f0);
/*801B95EC 001B63EC*/ PPC::Runtime::ASM::fmuls(context->f0, context->f3, context->f3);
/*801B95F0 001B63F0*/ PPC::Runtime::ASM::fadds(context->f1, context->f2, context->f1);
/*801B95F4 001B63F4*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*801B95F8 001B63F8*/ PPC::Runtime::ASM::ble(.L_801B960C);
/*801B95FC 001B63FC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c0, context->r31));
/*801B9600 001B6400*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*801B9604 001B6404*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 7, 24, 24);
/*801B9608 001B6408*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9c0, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_801B960C, 0x801B960C) //this is a jump label
/*801B960C 001B640C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801B9610 001B6410*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*801B9614 001B6414*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801B9618 001B6418*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*801B961C 001B641C*/ PPC::Runtime::ASM::blr();
}