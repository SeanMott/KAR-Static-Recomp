//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_801152CC(PPC::Runtime::GCContext* context)
{
/*801152CC 001120CC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*801152D0 001120D0*/ PPC::Runtime::ASM::mflr(context->r0);
/*801152D4 001120D4*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805DFB58 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801152D8 001120D8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801152DC 001120DC*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/* 801152E0 001120E0  7C 9F 23 79 */ mr. context->r31 , context->r4
/*801152E4 001120E4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*801152E8 001120E8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*801152EC 001120EC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*801152F0 001120F0*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*801152F4 001120F4*/ PPC::Runtime::ASM::fmuls(context->f0, context->f1, context->f0);
/*801152F8 001120F8*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*801152FC 001120FC*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80115300 00112100*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80115304 00112104*/ PPC::Runtime::ASM::bne(.L_80115318);
/*80115308 00112108*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6388 @ Get_MemoryOffset_SDA21);
/*8011530C 0011210C*/ PPC::Runtime::ASM::li(context->r4, 0x316);
/*80115310 00112110*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6390 @ Get_MemoryOffset_SDA21);
/*80115314 00112114*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80115318, 0x80115318) //this is a jump label
/*80115318 00112118*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8011531C 0011211C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80115320 00112120*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r31));
/*80115324 00112124*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80115328 00112128*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r31));
/*8011532C 0011212C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r31));
/*80115330 00112130*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*80115334 00112134*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*80115338 00112138*/ PPC::Runtime::ASM::bne(.L_80115384);
/*8011533C 0011213C*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*80115340 00112140*/ PPC::Runtime::ASM::beq(.L_80115384);
/*80115344 00112144*/ PPC::Runtime::ASM::bne(.L_80115358);
/*80115348 00112148*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6388 @ Get_MemoryOffset_SDA21);
/*8011534C 0011214C*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*80115350 00112150*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6390 @ Get_MemoryOffset_SDA21);
/*80115354 00112154*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80115358, 0x80115358) //this is a jump label
/*80115358 00112158*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*8011535C 0011215C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80115360 00112160*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*80115364 00112164*/ PPC::Runtime::ASM::bne(.L_80115374);
/*80115368 00112168*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*8011536C 0011216C*/ PPC::Runtime::ASM::beq(.L_80115374);
/*80115370 00112170*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80115374, 0x80115374) //this is a jump label
/*80115374 00112174*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80115378 00112178*/ PPC::Runtime::ASM::bne(.L_80115384);
/*8011537C 0011217C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*80115380 00112180*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_80115384, 0x80115384) //this is a jump label
/*80115384 00112184*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80115388 00112188*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*8011538C 0011218C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80115390 00112190*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80115394 00112194*/ PPC::Runtime::ASM::blr();
}