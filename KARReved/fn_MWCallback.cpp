//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_MWCallback(PPC::Runtime::GCContext* context)
{
/*803F3DEC 003F0BEC*/ PPC::Runtime::ASM::mflr(context->r0);
/*803F3DF0 003F0BF0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*803F3DF4 003F0BF4*/ PPC::Runtime::ASM::li(context->r0, 0x1);
/*803F3DF8 003F0BF8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x8, context->r1));
/*803F3DFC 003F0BFC*/ PPC::Runtime::ASM::lwz(context->r12, STRUCT_BYTE4_COUNT_1805DE158 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803F3E00 003F0C00*/ PPC::Runtime::ASM::stb(context->r0, SkipAddress_44 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803F3E04 003F0C04*/ PPC::Runtime::ASM::cmplwi(context->r12, 0x0);
/*803F3E08 003F0C08*/ PPC::Runtime::ASM::beq(.L_803F3E18);
/*803F3E0C 003F0C0C*/ PPC::Runtime::ASM::mtlr(context->r12);
/*803F3E10 003F0C10*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/* 803F3E14 003F0C14  4E 80 00 21 */ blrl
RUNTIME_PPC_JUMP_LABEL(.L_803F3E18, 0x803F3E18) //this is a jump label
/*803F3E18 003F0C18*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803F3E1C 003F0C1C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x8);
/*803F3E20 003F0C20*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803F3E24 003F0C24*/ PPC::Runtime::ASM::blr();
}