//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_FuncDoesShit_5.hpp"
#include "fn_8016576C.hpp"
#include "fn_8016583C.hpp"
#include "fn_JObj_GetWorldPosition.hpp"
#include "fn_JObj_GetWorldPosition.hpp"
#include "fn_8016583C.hpp"
#include "fn_801400AC.hpp"
#include "fn_80140510.hpp"



void fn_801666CC(PPC::Runtime::GCContext* context)
{
/*801666CC 001634CC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*801666D0 001634D0*/ PPC::Runtime::ASM::mflr(context->r0);
/*801666D4 001634D4*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*801666D8 001634D8*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*801666DC 001634DC*/ PPC::Runtime::ASM::bl(_savegpr_27);
/*801666E0 001634E0*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*801666E4 001634E4*/ PPC::Runtime::ASM::bl(fn_FuncDoesShit_5);
/*801666E8 001634E8*/ PPC::Runtime::ASM::extsb(context->r0, context->r27);
/*801666EC 001634EC*/ PPC::Runtime::ASM::slwi(context->r0, context->r0, 2);
/*801666F0 001634F0*/ PPC::Runtime::ASM::add(context->r3, context->r3, context->r0);
/*801666F4 001634F4*/ PPC::Runtime::ASM::lwz(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa20, context->r3));
/*801666F8 001634F8*/ PPC::Runtime::ASM::cmplwi(context->r27, 0x0);
/*801666FC 001634FC*/ PPC::Runtime::ASM::beq(.L_801668B8);
/*80166700 00163500*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r27));
/*80166704 00163504*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r27));
/*80166708 00163508*/ PPC::Runtime::ASM::bl(fn_8016576C);
/*8016670C 0016350C*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r31));
/*80166710 00163510*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*80166714 00163514*/ PPC::Runtime::ASM::bl(fn_8016583C);
/*80166718 00163518*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x0);
/*8016671C 0016351C*/ PPC::Runtime::ASM::bne(.L_80166730);
/*80166720 00163520*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6AD0 @ Get_MemoryOffset_SDA21);
/*80166724 00163524*/ PPC::Runtime::ASM::li(context->r4, 0x3a9);
/*80166728 00163528*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6AD8 @ Get_MemoryOffset_SDA21);
/*8016672C 0016352C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80166730, 0x80166730) //this is a jump label
/*80166730 00163530*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80166734 00163534*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80166738 00163538*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r28));
/*8016673C 0016353C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r28));
/*80166740 00163540*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r1));
/*80166744 00163544*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r28));
/*80166748 00163548*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r28));
/*8016674C 0016354C*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r0, 0, 6, 6);
/*80166750 00163550*/ PPC::Runtime::ASM::bne(.L_8016679C);
/*80166754 00163554*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x0);
/*80166758 00163558*/ PPC::Runtime::ASM::beq(.L_8016679C);
/*8016675C 0016355C*/ PPC::Runtime::ASM::bne(.L_80166770);
/*80166760 00163560*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6AD0 @ Get_MemoryOffset_SDA21);
/*80166764 00163564*/ PPC::Runtime::ASM::li(context->r4, 0x25d);
/*80166768 00163568*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6AD8 @ Get_MemoryOffset_SDA21);
/*8016676C 0016356C*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80166770, 0x80166770) //this is a jump label
/*80166770 00163570*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r28));
/*80166774 00163574*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80166778 00163578*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 8, 8);
/*8016677C 0016357C*/ PPC::Runtime::ASM::bne(.L_8016678C);
/*80166780 00163580*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r4, 0, 25, 25);
/*80166784 00163584*/ PPC::Runtime::ASM::beq(.L_8016678C);
/*80166788 00163588*/ PPC::Runtime::ASM::li(context->r3, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8016678C, 0x8016678C) //this is a jump label
/*8016678C 0016358C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80166790 00163590*/ PPC::Runtime::ASM::bne(.L_8016679C);
/*80166794 00163594*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*80166798 00163598*/ PPC::Runtime::ASM::bl(fn_HSD_JOBJ_SetMtxDirtySub);
RUNTIME_PPC_JUMP_LABEL(.L_8016679C, 0x8016679C) //this is a jump label
/*8016679C 0016359C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r27));
/*801667A0 001635A0*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*801667A4 001635A4*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*801667A8 001635A8*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x1c);
/*801667AC 001635AC*/ PPC::Runtime::ASM::bl(fn_JObj_GetWorldPosition);
/*801667B0 001635B0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*801667B4 001635B4*/ PPC::Runtime::ASM::addi(context->r5, context->r30, 0x28);
/*801667B8 001635B8*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*801667BC 001635BC*/ PPC::Runtime::ASM::bl(fn_JObj_GetWorldPosition);
/*801667C0 001635C0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r27));
/*801667C4 001635C4*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r30));
/*801667C8 001635C8*/ PPC::Runtime::ASM::addi(context->r28, context->r30, 0x34);
/*801667CC 001635CC*/ PPC::Runtime::ASM::cmplwi(context->r29, 0x0);
/*801667D0 001635D0*/ PPC::Runtime::ASM::bne(.L_801667E4);
/*801667D4 001635D4*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6AD0 @ Get_MemoryOffset_SDA21);
/*801667D8 001635D8*/ PPC::Runtime::ASM::li(context->r4, 0x351);
/*801667DC 001635DC*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6AD8 @ Get_MemoryOffset_SDA21);
/*801667E0 001635E0*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_801667E4, 0x801667E4) //this is a jump label
/*801667E4 001635E4*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x0);
/*801667E8 001635E8*/ PPC::Runtime::ASM::bne(.L_801667FC);
/*801667EC 001635EC*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6AD0 @ Get_MemoryOffset_SDA21);
/*801667F0 001635F0*/ PPC::Runtime::ASM::li(context->r4, 0x352);
/*801667F4 001635F4*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6AE0 @ Get_MemoryOffset_SDA21);
/*801667F8 001635F8*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_801667FC, 0x801667FC) //this is a jump label
/*801667FC 001635FC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r29));
/*80166800 00163600*/ PPC::Runtime::ASM::addi(context->r27, context->r30, 0x40);
/*80166804 00163604*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r29));
/*80166808 00163608*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*8016680C 0016360C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*80166810 00163610*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r29));
/*80166814 00163614*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r28));
/*80166818 00163618*/ PPC::Runtime::ASM::lwz(context->r28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*8016681C 0016361C*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x0);
/*80166820 00163620*/ PPC::Runtime::ASM::bne(.L_80166834);
/*80166824 00163624*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6AD0 @ Get_MemoryOffset_SDA21);
/*80166828 00163628*/ PPC::Runtime::ASM::li(context->r4, 0x351);
/*8016682C 0016362C*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6AD8 @ Get_MemoryOffset_SDA21);
/*80166830 00163630*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80166834, 0x80166834) //this is a jump label
/*80166834 00163634*/ PPC::Runtime::ASM::cmplwi(context->r27, 0x0);
/*80166838 00163638*/ PPC::Runtime::ASM::bne(.L_8016684C);
/*8016683C 0016363C*/ PPC::Runtime::ASM::li(context->r3, lbl_805D6AD0 @ Get_MemoryOffset_SDA21);
/*80166840 00163640*/ PPC::Runtime::ASM::li(context->r4, 0x352);
/*80166844 00163644*/ PPC::Runtime::ASM::li(context->r5, lbl_805D6AE0 @ Get_MemoryOffset_SDA21);
/*80166848 00163648*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8016684C, 0x8016684C) //this is a jump label
/*8016684C 0016364C*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r28));
/*80166850 00163650*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80166854 00163654*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r28));
/*80166858 00163658*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*8016685C 0016365C*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r27));
/*80166860 00163660*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r27));
/*80166864 00163664*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r28));
/*80166868 00163668*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r27));
/*8016686C 0016366C*/ PPC::Runtime::ASM::sth(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5e, context->r31));
/*80166870 00163670*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r31));
/*80166874 00163674*/ PPC::Runtime::ASM::bl(fn_8016583C);
/*80166878 00163678*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5c, context->r31));
/*8016687C 0016367C*/ PPC::Runtime::ASM::extsb.(context->r0, context->r0);
/*80166880 00163680*/ PPC::Runtime::ASM::bne(.L_801668A4);
/*80166884 00163684*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r31));
/*80166888 00163688*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*8016688C 0016368C*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r31));
/*80166890 00163690*/ PPC::Runtime::ASM::lbz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x51, context->r31));
/*80166894 00163694*/ PPC::Runtime::ASM::lbz(context->r7, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x52, context->r31));
/*80166898 00163698*/ PPC::Runtime::ASM::lbz(context->r8, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5d, context->r31));
/*8016689C 0016369C*/ PPC::Runtime::ASM::bl(fn_801400AC);
/*801668A0 001636A0*/ PPC::Runtime::ASM::b(.L_801668B8);
RUNTIME_PPC_JUMP_LABEL(.L_801668A4, 0x801668A4) //this is a jump label
/*801668A4 001636A4*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4c, context->r31));
/*801668A8 001636A8*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*801668AC 001636AC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r31));
/*801668B0 001636B0*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x5d, context->r31));
/*801668B4 001636B4*/ PPC::Runtime::ASM::bl(fn_80140510);
RUNTIME_PPC_JUMP_LABEL(.L_801668B8, 0x801668B8) //this is a jump label
/*801668B8 001636B8*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*801668BC 001636BC*/ PPC::Runtime::ASM::bl(_restgpr_27);
/*801668C0 001636C0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*801668C4 001636C4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801668C8 001636C8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*801668CC 001636CC*/ PPC::Runtime::ASM::blr();
}