//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"



void fn_80150208(PPC::Runtime::GCContext* context)
{
/*80150208 0014D008*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*8015020C 0014D00C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80150210 0014D010*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80150214 0014D014*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*80150218 0014D018*/ PPC::Runtime::ASM::mr(context->r31, context->r5);
/*8015021C 0014D01C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*80150220 0014D020*/ PPC::Runtime::ASM::mr(context->r30, context->r4);
/*80150224 0014D024*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80150228 0014D028*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
/*8015022C 0014D02C*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*80150230 0014D030*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x588, context->r3));
/*80150234 0014D034*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80150238 0014D038*/ PPC::Runtime::ASM::beq(.L_80150324);
/*8015023C 0014D03C*/ PPC::Runtime::ASM::extsb(context->r0, context->r30);
/*80150240 0014D040*/ PPC::Runtime::ASM::lwz(context->r9, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80150244 0014D044*/ PPC::Runtime::ASM::mulli(context->r3, context->r0, 0xc);
/*80150248 0014D048*/ PPC::Runtime::ASM::extsb(context->r0, context->r29);
/*8015024C 0014D04C*/ PPC::Runtime::ASM::lwz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r9));
/*80150250 0014D050*/ PPC::Runtime::ASM::lwz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r9));
/*80150254 0014D054*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x2);
/*80150258 0014D058*/ PPC::Runtime::ASM::add(context->r3, context->r9, context->r3);
/*8015025C 0014D05C*/ PPC::Runtime::ASM::lwz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r9));
/*80150260 0014D060*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r3));
/*80150264 0014D064*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x68, context->r3));
/*80150268 0014D068*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x6c, context->r3));
/*8015026C 0014D06C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r9));
/*80150270 0014D070*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r9));
/*80150274 0014D074*/ PPC::Runtime::ASM::stw(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80150278 0014D078*/ PPC::Runtime::ASM::fsubs(context->f3, context->f1, context->f0);
/*8015027C 0014D07C*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80150280 0014D080*/ PPC::Runtime::ASM::stw(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*80150284 0014D084*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80150288 0014D088*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8015028C 0014D08C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80150290 0014D090*/ PPC::Runtime::ASM::beq(.L_801502C4);
/*80150294 0014D094*/ PPC::Runtime::ASM::bge(.L_801502A8);
/*80150298 0014D098*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*8015029C 0014D09C*/ PPC::Runtime::ASM::beq(.L_801502F4);
/*801502A0 0014D0A0*/ PPC::Runtime::ASM::bge(.L_801502B4);
/*801502A4 0014D0A4*/ PPC::Runtime::ASM::b(.L_801502F4);
RUNTIME_PPC_JUMP_LABEL(.L_801502A8, 0x801502A8) //this is a jump label
/*801502A8 0014D0A8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x4);
/*801502AC 0014D0AC*/ PPC::Runtime::ASM::bge(.L_801502F4);
/*801502B0 0014D0B0*/ PPC::Runtime::ASM::b(.L_801502D8);
RUNTIME_PPC_JUMP_LABEL(.L_801502B4, 0x801502B4) //this is a jump label
/*801502B4 0014D0B4*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801502B8 0014D0B8*/ PPC::Runtime::ASM::fsubs(context->f0, context->f0, context->f3);
/*801502BC 0014D0BC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801502C0 0014D0C0*/ PPC::Runtime::ASM::b(.L_801502F4);
RUNTIME_PPC_JUMP_LABEL(.L_801502C4, 0x801502C4) //this is a jump label
/*801502C4 0014D0C4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801502C8 0014D0C8*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E06B8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801502CC 0014D0CC*/ PPC::Runtime::ASM::fmuls(context->f0, context->f1, context->f0);
/*801502D0 0014D0D0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801502D4 0014D0D4*/ PPC::Runtime::ASM::b(.L_801502F4);
RUNTIME_PPC_JUMP_LABEL(.L_801502D8, 0x801502D8) //this is a jump label
/*801502D8 0014D0D8*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801502DC 0014D0DC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801502E0 0014D0E0*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E06B8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801502E4 0014D0E4*/ PPC::Runtime::ASM::fsubs(context->f2, context->f2, context->f3);
/*801502E8 0014D0E8*/ PPC::Runtime::ASM::fmuls(context->f0, context->f1, context->f0);
/*801502EC 0014D0EC*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*801502F0 0014D0F0*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_801502F4, 0x801502F4) //this is a jump label
/*801502F4 0014D0F4*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801502F8 0014D0F8*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801502FC 0014D0FC*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*80150300 0014D100*/ PPC::Runtime::ASM::fadds(context->f4, context->f1, context->f0);
/*80150304 0014D104*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80150308 0014D108*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8015030C 0014D10C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80150310 0014D110*/ PPC::Runtime::ASM::fadds(context->f2, context->f3, context->f2);
/*80150314 0014D114*/ PPC::Runtime::ASM::stfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
/*80150318 0014D118*/ PPC::Runtime::ASM::fadds(context->f0, context->f1, context->f0);
/*8015031C 0014D11C*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*80150320 0014D120*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80150324, 0x80150324) //this is a jump label
/*80150324 0014D124*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80150328 0014D128*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*8015032C 0014D12C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1));
/*80150330 0014D130*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80150334 0014D134*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80150338 0014D138*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*8015033C 0014D13C*/ PPC::Runtime::ASM::blr();
}