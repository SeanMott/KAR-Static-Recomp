//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80199410.hpp"
#include "fn_80196878.hpp"
#include "fn_8006E130.hpp"
#include "fn_800550F4.hpp"
#include "fn_800550BC.hpp"



void fn_80198934(PPC::Runtime::GCContext* context)
{
/*80198934 00195734*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x50, context->r1));
/*80198938 00195738*/ PPC::Runtime::ASM::mflr(context->r0);
/*8019893C 0019573C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*80198940 00195740*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*80198944 00195744*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1)0, context->qr0);
/*80198948 00195748*/ PPC::Runtime::ASM::stfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*8019894C 0019574C*/ PPC::Runtime::ASM::psq_st(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1)0, context->qr0);
/*80198950 00195750*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*80198954 00195754*/ PPC::Runtime::ASM::bl(_savegpr_22);
/*80198958 00195758*/ PPC::Runtime::ASM::mr(context->r24, context->r3);
/*8019895C 0019575C*/ PPC::Runtime::ASM::fmr(context->f31, context->f2);
/*80198960 00195760*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2b0, context->r3));
/*80198964 00195764*/ PPC::Runtime::ASM::fmr(context->f30, context->f1);
/*80198968 00195768*/ PPC::Runtime::ASM::lwz(context->r25, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r24));
/*8019896C 0019576C*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80198970 00195770*/ PPC::Runtime::ASM::lwz(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80198974 00195774*/ PPC::Runtime::ASM::stfs(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2a0, context->r24));
/*80198978 00195778*/ PPC::Runtime::ASM::mr(context->r3, context->r26);
/*8019897C 0019577C*/ PPC::Runtime::ASM::bl(fn_HSD_JObjRemoveAnimAllByFlags);
/*80198980 00195780*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r25));
/*80198984 00195784*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*80198988 00195788*/ PPC::Runtime::ASM::beq(.L_80198AB8);
/*8019898C 0019578C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r24));
/*80198990 00195790*/ PPC::Runtime::ASM::mr(context->r3, context->r24);
/*80198994 00195794*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80198998 00195798*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r5));
/*8019899C 0019579C*/ PPC::Runtime::ASM::bl(fn_80199410);
/*801989A0 001957A0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r24));
/*801989A4 001957A4*/ PPC::Runtime::ASM::li(context->r31, 0x0);
/*801989A8 001957A8*/ PPC::Runtime::ASM::lwz(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r25));
/*801989AC 001957AC*/ PPC::Runtime::ASM::mr(context->r23, context->r31);
/*801989B0 001957B0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*801989B4 001957B4*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r27));
/*801989B8 001957B8*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r27));
/*801989BC 001957BC*/ PPC::Runtime::ASM::extrwi(context->r30, context->r0, 13, 5);
/*801989C0 001957C0*/ PPC::Runtime::ASM::b(.L_80198A68);
/*801989C4 001957C4*/ PPC::Runtime::ASM::b(.L_801989D4);
RUNTIME_PPC_JUMP_LABEL(.L_801989C8, 0x801989C8) //this is a jump label
/*801989C8 001957C8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x10);
/*801989CC 001957CC*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x1);
/*801989D0 001957D0*/ PPC::Runtime::ASM::addi(context->r23, context->r23, 0x10);
RUNTIME_PPC_JUMP_LABEL(.L_801989D4, 0x801989D4) //this is a jump label
/*801989D4 001957D4*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/* 801989D8 001957D8  54 00 CF FF */ extrwi. context->r0 , context->r0 , 1 , 24
/*801989DC 001957DC*/ PPC::Runtime::ASM::beq(.L_801989C8);
/*801989E0 001957E0*/ PPC::Runtime::ASM::slwi(context->r22, context->r31, 4);
RUNTIME_PPC_JUMP_LABEL(.L_801989E4, 0x801989E4) //this is a jump label
/*801989E4 001957E4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2b0, context->r24));
/*801989E8 001957E8*/ PPC::Runtime::ASM::addi(context->r0, context->r22, 0x8);
/*801989EC 001957EC*/ PPC::Runtime::ASM::lbzx(context->r0, context->r3, context->r0);
/* 801989F0 001957F0  54 00 D7 FF */ extrwi. context->r0 , context->r0 , 1 , 25
/*801989F4 001957F4*/ PPC::Runtime::ASM::beq(.L_80198A24);
/*801989F8 001957F8*/ PPC::Runtime::ASM::mr(context->r3, context->r24);
/*801989FC 001957FC*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*80198A00 00195800*/ PPC::Runtime::ASM::bl(fn_80196878);
/*80198A04 00195804*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80198A08 00195808*/ PPC::Runtime::ASM::beq(.L_80198A24);
/*80198A0C 0019580C*/ PPC::Runtime::ASM::and.(context->r0, context->r3, context->r30);
/*80198A10 00195810*/ PPC::Runtime::ASM::bne(.L_80198A24);
/*80198A14 00195814*/ PPC::Runtime::ASM::addi(context->r22, context->r22, 0x10);
/*80198A18 00195818*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x1);
/*80198A1C 0019581C*/ PPC::Runtime::ASM::addi(context->r23, context->r23, 0x10);
/*80198A20 00195820*/ PPC::Runtime::ASM::b(.L_801989E4);
RUNTIME_PPC_JUMP_LABEL(.L_80198A24, 0x80198A24) //this is a jump label
/*80198A24 00195824*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2b0, context->r24));
/*80198A28 00195828*/ PPC::Runtime::ASM::add(context->r3, context->r0, context->r23);
/*80198A2C 0019582C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/* 80198A30 00195830  54 00 EF FF */ extrwi. context->r0 , context->r0 , 1 , 28
/*80198A34 00195834*/ PPC::Runtime::ASM::bne(.L_80198A4C);
/*80198A38 00195838*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*80198A3C 0019583C*/ PPC::Runtime::ASM::mr(context->r4, context->r27);
/*80198A40 00195840*/ PPC::Runtime::ASM::lbz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*80198A44 00195844*/ PPC::Runtime::ASM::mr(context->r5, context->r29);
/*80198A48 00195848*/ PPC::Runtime::ASM::bl(fn_8006E130);
RUNTIME_PPC_JUMP_LABEL(.L_80198A4C, 0x80198A4C) //this is a jump label
/*80198A4C 0019584C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*80198A50 00195850*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x1);
/*80198A54 00195854*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x1);
/*80198A58 00195858*/ PPC::Runtime::ASM::addi(context->r23, context->r23, 0x10);
/*80198A5C 0019585C*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*80198A60 00195860*/ PPC::Runtime::ASM::mulli(context->r0, context->r0, 0xc);
/*80198A64 00195864*/ PPC::Runtime::ASM::add(context->r29, context->r29, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_80198A68, 0x80198A68) //this is a jump label
/*80198A68 00195868*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*80198A6C 0019586C*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*80198A70 00195870*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*80198A74 00195874*/ PPC::Runtime::ASM::bne(.L_80198ACC);
/*80198A78 00195878*/ PPC::Runtime::ASM::fmr(context->f1, context->f30);
/*80198A7C 0019587C*/ PPC::Runtime::ASM::mr(context->r3, context->r26);
/*80198A80 00195880*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*80198A84 00195884*/ PPC::Runtime::ASM::bl(fn_HSD_JObjReqAnimAllByFlags);
/*80198A88 00195888*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r25));
/* 80198A8C 0019588C  54 00 D7 FF */ extrwi. context->r0 , context->r0 , 1 , 25
/*80198A90 00195890*/ PPC::Runtime::ASM::beq(.L_80198AA4);
/*80198A94 00195894*/ PPC::Runtime::ASM::lis(context->r4, 0x1);
/*80198A98 00195898*/ PPC::Runtime::ASM::mr(context->r3, context->r26);
/*80198A9C 0019589C*/ PPC::Runtime::ASM::subi(context->r4, context->r4, 0x481);
/*80198AA0 001958A0*/ PPC::Runtime::ASM::bl(fn_800550F4);
RUNTIME_PPC_JUMP_LABEL(.L_80198AA4, 0x80198AA4) //this is a jump label
/*80198AA4 001958A4*/ PPC::Runtime::ASM::fmr(context->f1, context->f31);
/*80198AA8 001958A8*/ PPC::Runtime::ASM::lis(context->r4, 0x1);
/*80198AAC 001958AC*/ PPC::Runtime::ASM::mr(context->r3, context->r26);
/*80198AB0 001958B0*/ PPC::Runtime::ASM::subi(context->r4, context->r4, 0x481);
/*80198AB4 001958B4*/ PPC::Runtime::ASM::bl(fn_800550BC);
RUNTIME_PPC_JUMP_LABEL(.L_80198AB8, 0x80198AB8) //this is a jump label
/*80198AB8 001958B8*/ PPC::Runtime::ASM::fsubs(context->f1, context->f30, context->f31);
/*80198ABC 001958BC*/ PPC::Runtime::ASM::lfs(context->f0, STRUCT_FLOAT_COUNT_1805E1138 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*80198AC0 001958C0*/ PPC::Runtime::ASM::stfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x298, context->r24));
/*80198AC4 001958C4*/ PPC::Runtime::ASM::stfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x29c, context->r24));
/*80198AC8 001958C8*/ PPC::Runtime::ASM::b(.L_80198AD8);
RUNTIME_PPC_JUMP_LABEL(.L_80198ACC, 0x80198ACC) //this is a jump label
/*80198ACC 001958CC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2b0, context->r24));
/*80198AD0 001958D0*/ PPC::Runtime::ASM::add(context->r3, context->r0, context->r23);
/*80198AD4 001958D4*/ PPC::Runtime::ASM::b(.L_801989D4);
RUNTIME_PPC_JUMP_LABEL(.L_80198AD8, 0x80198AD8) //this is a jump label
/*80198AD8 001958D8*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1)0, context->qr0);
/*80198ADC 001958DC*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*80198AE0 001958E0*/ PPC::Runtime::ASM::psq_l(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1)0, context->qr0);
/*80198AE4 001958E4*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*80198AE8 001958E8*/ PPC::Runtime::ASM::lfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*80198AEC 001958EC*/ PPC::Runtime::ASM::bl(_restgpr_22);
/*80198AF0 001958F0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r1));
/*80198AF4 001958F4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80198AF8 001958F8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x50);
/*80198AFC 001958FC*/ PPC::Runtime::ASM::blr();
}