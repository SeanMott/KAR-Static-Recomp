//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80254CD8.hpp"
#include "fn_8025017C.hpp"
#include "fn_8025017C.hpp"
#include "fn_8025017C.hpp"
#include "fn_8024F488.hpp"



void fn_80258698(PPC::Runtime::GCContext* context)
{
/*80258698 00255498*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8025869C 0025549C*/ PPC::Runtime::ASM::mflr(context->r0);
/*802586A0 002554A0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802586A4 002554A4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802586A8 002554A8*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802586AC 002554AC*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*802586B0 002554B0*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*802586B4 002554B4*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*802586B8 002554B8*/ PPC::Runtime::ASM::bl(fn_80254CD8);
/*802586BC 002554BC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*802586C0 002554C0*/ PPC::Runtime::ASM::bl(fn_8025017C);
/*802586C4 002554C4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c8, context->r31));
/*802586C8 002554C8*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*802586CC 002554CC*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*802586D0 002554D0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb8, context->r31));
/*802586D4 002554D4*/ PPC::Runtime::ASM::bl(fn_8025017C);
/*802586D8 002554D8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1cc, context->r31));
/*802586DC 002554DC*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*802586E0 002554E0*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*802586E4 002554E4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbc, context->r31));
/*802586E8 002554E8*/ PPC::Runtime::ASM::bl(fn_8025017C);
/*802586EC 002554EC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1d0, context->r31));
/*802586F0 002554F0*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*802586F4 002554F4*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E2E04 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802586F8 002554F8*/ PPC::Runtime::ASM::li(context->r4, 0x5);
/*802586FC 002554FC*/ PPC::Runtime::ASM::fmuls(context->f0, context->f0, context->f1);
/*80258700 00255500*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E2E00 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80258704 00255504*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80258708 00255508*/ PPC::Runtime::ASM::fmr(context->f3, context->f1);
/*8025870C 0025550C*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc0, context->r31));
/*80258710 00255510*/ PPC::Runtime::ASM::bl(fn_8024F488);
/*80258714 00255514*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80258718 00255518*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8025871C 0025551C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80258720 00255520*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80258724 00255524*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80258728 00255528*/ PPC::Runtime::ASM::blr();
}