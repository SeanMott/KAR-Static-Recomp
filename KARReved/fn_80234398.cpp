//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80234398(PPC::Runtime::GCContext* context)
{
/*80234398 00231198*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8023439C 0023119C*/ PPC::Runtime::ASM::mflr(context->r0);
/*802343A0 002311A0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802343A4 002311A4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/* 802343A8 002311A8  7C 7F 1B 79 */ mr. context->r31 , context->r3
/*802343AC 002311AC*/ PPC::Runtime::ASM::beq(.L_802343C4);
/*802343B0 002311B0*/ PPC::Runtime::ASM::lis(context->r3, lbl_8055D7A0 @ Get_MemoryOffset_HighBit);
/*802343B4 002311B4*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_8055D7A0 @ Get_MemoryOffset_LowBit);
/*802343B8 002311B8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x58);
/*802343BC 002311BC*/ PPC::Runtime::ASM::bl(fn_HSD_ObjAlloc);
/*802343C0 002311C0*/ PPC::Runtime::ASM::b(.L_802343D4);
RUNTIME_PPC_JUMP_LABEL(.L_802343C4, 0x802343C4) //this is a jump label
/*802343C4 002311C4*/ PPC::Runtime::ASM::lis(context->r3, lbl_8055D7A0 @ Get_MemoryOffset_HighBit);
/*802343C8 002311C8*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_8055D7A0 @ Get_MemoryOffset_LowBit);
/*802343CC 002311CC*/ PPC::Runtime::ASM::addi(context->r3, context->r3, 0x2c);
/*802343D0 002311D0*/ PPC::Runtime::ASM::bl(fn_HSD_ObjAlloc);
RUNTIME_PPC_JUMP_LABEL(.L_802343D4, 0x802343D4) //this is a jump label
/*802343D4 002311D4*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*802343D8 002311D8*/ PPC::Runtime::ASM::beq(.L_802344C8);
/*802343DC 002311DC*/ PPC::Runtime::ASM::lis(context->r4, lbl_8055D7A0 @ Get_MemoryOffset_HighBit);
/*802343E0 002311E0*/ PPC::Runtime::ASM::addi(context->r5, context->r4, lbl_8055D7A0 @ Get_MemoryOffset_LowBit);
/*802343E4 002311E4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbc, context->r5));
/*802343E8 002311E8*/ PPC::Runtime::ASM::addi(context->r8, context->r4, 0x1);
/*802343EC 002311EC*/ PPC::Runtime::ASM::stw(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbc, context->r5));
/*802343F0 002311F0*/ PPC::Runtime::ASM::b(.L_802343F8);
RUNTIME_PPC_JUMP_LABEL(.L_802343F4, 0x802343F4) //this is a jump label
/*802343F4 002311F4*/ PPC::Runtime::ASM::addi(context->r8, context->r8, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_802343F8, 0x802343F8) //this is a jump label
/*802343F8 002311F8*/ PPC::Runtime::ASM::cmplwi(context->r8, 0x0);
/*802343FC 002311FC*/ PPC::Runtime::ASM::beq(.L_802343F4);
/*80234400 00231200*/ PPC::Runtime::ASM::stw(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xbc, context->r5));
/*80234404 00231204*/ PPC::Runtime::ASM::lis(context->r4, 0x4);
/*80234408 00231208*/ PPC::Runtime::ASM::subi(context->r0, context->r4, 0x1);
/*8023440C 0023120C*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*80234410 00231210*/ PPC::Runtime::ASM::lbz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x25, context->r3));
/*80234414 00231214*/ PPC::Runtime::ASM::rlwimi(context->r6, context->r31, 7, 24, 24);
/*80234418 00231218*/ PPC::Runtime::ASM::slwi(context->r5, context->r7, 18);
/*8023441C 0023121C*/ PPC::Runtime::ASM::slwi(context->r4, context->r8, 18);
/*80234420 00231220*/ PPC::Runtime::ASM::and(context->r0, context->r8, context->r0);
/*80234424 00231224*/ PPC::Runtime::ASM::stb(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x25, context->r3));
/*80234428 00231228*/ PPC::Runtime::ASM::or(context->r0, context->r4, context->r0);
/*8023442C 0023122C*/ PPC::Runtime::ASM::rlwimi(context->r5, context->r8, 18, 14, 31);
/*80234430 00231230*/ PPC::Runtime::ASM::and(context->r4, context->r7, context->r7);
/*80234434 00231234*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*80234438 00231238*/ PPC::Runtime::ASM::or(context->r4, context->r5, context->r4);
/*8023443C 0023123C*/ PPC::Runtime::ASM::li(context->r5, -0x1);
/*80234440 00231240*/ PPC::Runtime::ASM::stw(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*80234444 00231244*/ PPC::Runtime::ASM::li(context->r0, 0x5);
/*80234448 00231248*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8023444C 0023124C*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r3));
/*80234450 00231250*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r3));
/*80234454 00231254*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
/*80234458 00231258*/ PPC::Runtime::ASM::sth(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x26, context->r3));
/*8023445C 0023125C*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r3));
/*80234460 00231260*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80234464 00231264*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r3));
/*80234468 00231268*/ PPC::Runtime::ASM::stb(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r3));
/*8023446C 0023126C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80234470 00231270*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r7, 7, 24, 24);
/*80234474 00231274*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80234478 00231278*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*8023447C 0023127C*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r7, 6, 25, 25);
/*80234480 00231280*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80234484 00231284*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80234488 00231288*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r7, 5, 26, 26);
/*8023448C 0023128C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*80234490 00231290*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r3));
/*80234494 00231294*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x54, context->r3));
/*80234498 00231298*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r3));
/*8023449C 0023129C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x25, context->r3));
/*802344A0 002312A0*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r4, 5, 26, 26);
/*802344A4 002312A4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x25, context->r3));
/*802344A8 002312A8*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r3));
/*802344AC 002312AC*/ PPC::Runtime::ASM::stw(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x60, context->r3));
/*802344B0 002312B0*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x25, context->r3));
/*802344B4 002312B4*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r7, 6, 25, 25);
/*802344B8 002312B8*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x25, context->r3));
/*802344BC 002312BC*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x25, context->r3));
/*802344C0 002312C0*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r7, 4, 27, 27);
/*802344C4 002312C4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x25, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_802344C8, 0x802344C8) //this is a jump label
/*802344C8 002312C8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*802344CC 002312CC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802344D0 002312D0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802344D4 002312D4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*802344D8 002312D8*/ PPC::Runtime::ASM::blr();
}