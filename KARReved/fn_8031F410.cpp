//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8031F4C4.hpp"
#include "fn_8037B33C.hpp"



void fn_8031F410(PPC::Runtime::GCContext* context)
{
/*8031F410 0031C210*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*8031F414 0031C214*/ PPC::Runtime::ASM::mflr(context->r0);
/*8031F418 0031C218*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8031F41C 0031C21C*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8031F420 0031C220*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8031F424 0031C224*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*8031F428 0031C228*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r3));
/*8031F42C 0031C22C*/ PPC::Runtime::ASM::li(context->r0, 0x2);
/*8031F430 0031C230*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*8031F434 0031C234*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*8031F438 0031C238*/ PPC::Runtime::ASM::bl(fn_8031F4C4);
/*8031F43C 0031C23C*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E3F5C @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8031F440 0031C240*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x11c);
/*8031F444 0031C244*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8031F448 0031C248*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r31));
/*8031F44C 0031C24C*/ PPC::Runtime::ASM::bl(fn_8037B33C);
/*8031F450 0031C250*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8031F454 0031C254*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3F30 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8031F458 0031C258*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r31));
/*8031F45C 0031C25C*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x1a4);
/*8031F460 0031C260*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8031F464 0031C264*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x22, context->r31));
/*8031F468 0031C268*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r31));
/*8031F46C 0031C26C*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x26, context->r31));
/*8031F470 0031C270*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*8031F474 0031C274*/ PPC::Runtime::ASM::bl(fn_80384670);
/*8031F478 0031C278*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x1a4);
/*8031F47C 0031C27C*/ PPC::Runtime::ASM::bl(fn_80384A80);
/*8031F480 0031C280*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3F30 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8031F484 0031C284*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x1a8);
/*8031F488 0031C288*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x8);
/*8031F48C 0031C28C*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*8031F490 0031C290*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8031F494 0031C294*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8031F498 0031C298*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*8031F49C 0031C29C*/ PPC::Runtime::ASM::bl(fn_803848E0);
/*8031F4A0 0031C2A0*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x1a8);
/*8031F4A4 0031C2A4*/ PPC::Runtime::ASM::bl(fn_80384A80);
/*8031F4A8 0031C2A8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*8031F4AC 0031C2AC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8031F4B0 0031C2B0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8031F4B4 0031C2B4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*8031F4B8 0031C2B8*/ PPC::Runtime::ASM::blr();
}