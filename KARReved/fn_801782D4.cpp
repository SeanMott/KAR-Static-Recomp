//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"



void fn_801782D4(PPC::Runtime::GCContext* context)
{
/*801782D4 001750D4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*801782D8 001750D8*/ PPC::Runtime::ASM::mflr(context->r0);
/*801782DC 001750DC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801782E0 001750E0*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801782E4 001750E4*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1)0, context->qr0);
/*801782E8 001750E8*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801782EC 001750EC*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801782F0 001750F0*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*801782F4 001750F4*/ PPC::Runtime::ASM::extsb(context->r0, context->r31);
/*801782F8 001750F8*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*801782FC 001750FC*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*80178300 00175100*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd58, context->r3));
/*80178304 00175104*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*80178308 00175108*/ PPC::Runtime::ASM::beq(.L_801783A0);
/*8017830C 0017510C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r4));
/*80178310 00175110*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*80178314 00175114*/ PPC::Runtime::ASM::li(context->r0, 0x5);
/*80178318 00175118*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E0CA8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*8017831C 0017511C*/ PPC::Runtime::ASM::stb(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5e, context->r5));
/*80178320 00175120*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5f, context->r5));
/*80178324 00175124*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r5));
/*80178328 00175128*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r4));
/*8017832C 0017512C*/ PPC::Runtime::ASM::lfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r5));
/*80178330 00175130*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*80178334 00175134*/ PPC::Runtime::ASM::bne(.L_80178348);
/*80178338 00175138*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6D48 @ Get_MemoryOffset_SDA21);
/*8017833C 0017513C*/ PPC::Runtime::ASM::li(context->r4, 0x3b8);
/*80178340 00175140*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6D50 @ Get_MemoryOffset_SDA21);
/*80178344 00175144*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80178348, 0x80178348) //this is a jump label
/*80178348 00175148*/ PPC::Runtime::ASM::stfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
/*8017834C 0017514C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*80178350 00175150*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*80178354 00175154*/ PPC::Runtime::ASM::bne(.L_801783A0);
/*80178358 00175158*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*8017835C 0017515C*/ PPC::Runtime::ASM::beq(.L_801783A0);
/*80178360 00175160*/ PPC::Runtime::ASM::bne(.L_80178374);
/*80178364 00175164*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6D48 @ Get_MemoryOffset_SDA21);
/*80178368 00175168*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*8017836C 0017516C*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6D50 @ Get_MemoryOffset_SDA21);
/*80178370 00175170*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80178374, 0x80178374) //this is a jump label
/*80178374 00175174*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r31));
/*80178378 00175178*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*8017837C 0017517C*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*80178380 00175180*/ PPC::Runtime::ASM::bne(.L_80178390);
/*80178384 00175184*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*80178388 00175188*/ PPC::Runtime::ASM::beq(.L_80178390);
/*8017838C 0017518C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_80178390, 0x80178390) //this is a jump label
/*80178390 00175190*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80178394 00175194*/ PPC::Runtime::ASM::bne(.L_801783A0);
/*80178398 00175198*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*8017839C 0017519C*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_801783A0, 0x801783A0) //this is a jump label
/*801783A0 001751A0*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1)0, context->qr0);
/*801783A4 001751A4*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*801783A8 001751A8*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*801783AC 001751AC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801783B0 001751B0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801783B4 001751B4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*801783B8 001751B8*/ PPC::Runtime::ASM::blr();
}