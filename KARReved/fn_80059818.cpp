//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80073BA0.hpp"
#include "fn_80058E84.hpp"
#include "fn_8005915C.hpp"
#include "fn_80059228.hpp"
#include "fn_8005915C.hpp"
#include "fn_8005915C.hpp"
#include "fn_8005884C.hpp"
#include "fn_8005884C.hpp"
#include "fn_80059364.hpp"



void fn_80059818(PPC::Runtime::GCContext* context)
{
/*80059818 00056618*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x30, context->r1));
/*8005981C 0005661C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80059820 00056620*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80059824 00056624*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*80059828 00056628*/ PPC::Runtime::ASM::bl(_savegpr_25);
/*8005982C 0005662C*/ PPC::Runtime::ASM::mr(context->r25, context->r4);
/*80059830 00056630*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*80059834 00056634*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*80059838 00056638*/ PPC::Runtime::ASM::bl(fn_80073BA0);
/* 8005983C 0005663C  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*80059840 00056640*/ PPC::Runtime::ASM::beq(.L_80059944);
/*80059844 00056644*/ PPC::Runtime::ASM::mr(context->r27, context->r30);
/*80059848 00056648*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*8005984C 0005664C*/ PPC::Runtime::ASM::li(context->r29, 0x1);
/*80059850 00056650*/ PPC::Runtime::ASM::bl(fn_80058E84);
/*80059854 00056654*/ PPC::Runtime::ASM::lis(context->r0, 0x8000);
/*80059858 00056658*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*8005985C 0005665C*/ PPC::Runtime::ASM::cmplw(context->r27, context->r0);
/*80059860 00056660*/ PPC::Runtime::ASM::bge(.L_80059930);
/*80059864 00056664*/ PPC::Runtime::ASM::bl(fn_8005915C);
/*80059868 00056668*/ PPC::Runtime::ASM::lis(context->r0, 0x8000);
/*8005986C 0005666C*/ PPC::Runtime::ASM::cmplw(context->r27, context->r0);
/*80059870 00056670*/ PPC::Runtime::ASM::bge(.L_800598A0);
/*80059874 00056674*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1f);
/*80059878 00056678*/ PPC::Runtime::ASM::clrrwi(context->r25, context->r0, 5);
/*8005987C 0005667C*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*80059880 00056680*/ PPC::Runtime::ASM::bl(fn__HSD_MemAlloc);
/*80059884 00056684*/ PPC::Runtime::ASM::mr(context->r26, context->r3);
/*80059888 00056688*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*8005988C 0005668C*/ PPC::Runtime::ASM::mr(context->r5, context->r25);
/*80059890 00056690*/ PPC::Runtime::ASM::li(context->r6, 0x1);
/*80059894 00056694*/ PPC::Runtime::ASM::mr(context->r4, context->r26);
/*80059898 00056698*/ PPC::Runtime::ASM::bl(fn_80059228);
/*8005989C 0005669C*/ PPC::Runtime::ASM::b(.L_800598A4);
RUNTIME_PPC_JUMP_LABEL(.L_800598A0, 0x800598A0) //this is a jump label
/*800598A0 000566A0*/ PPC::Runtime::ASM::mr(context->r26, context->r27);
RUNTIME_PPC_JUMP_LABEL(.L_800598A4, 0x800598A4) //this is a jump label
/*800598A4 000566A4*/ PPC::Runtime::ASM::cmplwi(context->r26, 0x0);
/*800598A8 000566A8*/ PPC::Runtime::ASM::beq(.L_80059930);
/*800598AC 000566AC*/ PPC::Runtime::ASM::li(context->r3, 0x44);
/*800598B0 000566B0*/ PPC::Runtime::ASM::bl(fn__HSD_MemAlloc);
/*800598B4 000566B4*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*800598B8 000566B8*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*800598BC 000566BC*/ PPC::Runtime::ASM::bl(fn_8005915C);
/*800598C0 000566C0*/ PPC::Runtime::ASM::mr(context->r5, context->r3);
/*800598C4 000566C4*/ PPC::Runtime::ASM::mr(context->r4, context->r26);
/*800598C8 000566C8*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*800598CC 000566CC*/ PPC::Runtime::ASM::li(context->r26, 0x0);
/*800598D0 000566D0*/ PPC::Runtime::ASM::bl(fn_HSD_ArchiveParse);
/*800598D4 000566D4*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x1);
/*800598D8 000566D8*/ PPC::Runtime::ASM::bne(.L_80059900);
/*800598DC 000566DC*/ PPC::Runtime::ASM::lis(context->r3, MemoryOffset_203 @ Get_MemoryOffset_HighBit);
/*800598E0 000566E0*/ PPC::Runtime::ASM::addi(context->r3, context->r3, MemoryOffset_203 @ Get_MemoryOffset_LowBit);
/*800598E4 000566E4*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*800598E8 000566E8*/ PPC::Runtime::ASM::bl(OSReport);
/*800598EC 000566EC*/ PPC::Runtime::ASM::lis(context->r3, String_ "lbarchive." Get_MemoryOffset_HighBit);
/*800598F0 000566F0*/ PPC::Runtime::ASM::li(context->r4, 0x5e);
/*800598F4 000566F4*/ PPC::Runtime::ASM::addi(context->r3, context->r3, String_ "lbarchive." Get_MemoryOffset_LowBit);
/*800598F8 000566F8*/ PPC::Runtime::ASM::li(context->r5, lbl_805D5270 @ Get_MemoryOffset_SDA21);
/*800598FC 000566FC*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80059900, 0x80059900) //this is a jump label
/*80059900 00056700*/ PPC::Runtime::ASM::mr(context->r4, context->r26);
/*80059904 00056704*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*80059908 00056708*/ PPC::Runtime::ASM::addi(context->r26, context->r26, 0x1);
/*8005990C 0005670C*/ PPC::Runtime::ASM::bl(fn_8041E434);
/* 80059910 00056710  7C 7C 1B 79 */ mr. context->r28 , context->r3
/*80059914 00056714*/ PPC::Runtime::ASM::beq(.L_80059928);
/*80059918 00056718*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*8005991C 0005671C*/ PPC::Runtime::ASM::mr(context->r4, context->r28);
/*80059920 00056720*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*80059924 00056724*/ PPC::Runtime::ASM::bl(fn_8041E46C);
RUNTIME_PPC_JUMP_LABEL(.L_80059928, 0x80059928) //this is a jump label
/*80059928 00056728*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x0);
/*8005992C 0005672C*/ PPC::Runtime::ASM::bne(.L_80059900);
RUNTIME_PPC_JUMP_LABEL(.L_80059930, 0x80059930) //this is a jump label
/*80059930 00056730*/ PPC::Runtime::ASM::cmplw(context->r27, context->r30);
/*80059934 00056734*/ PPC::Runtime::ASM::beq(.L_800599F8);
/*80059938 00056738*/ PPC::Runtime::ASM::mr(context->r30, context->r27);
/*8005993C 0005673C*/ PPC::Runtime::ASM::li(context->r29, 0x0);
/*80059940 00056740*/ PPC::Runtime::ASM::b(.L_800599F8);
RUNTIME_PPC_JUMP_LABEL(.L_80059944, 0x80059944) //this is a jump label
/*80059944 00056744*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*80059948 00056748*/ PPC::Runtime::ASM::bl(fn_8005915C);
/*8005994C 0005674C*/ PPC::Runtime::ASM::addi(context->r0, context->r3, 0x1f);
/*80059950 00056750*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80059954 00056754*/ PPC::Runtime::ASM::clrrwi(context->r4, context->r0, 5);
/*80059958 00056758*/ PPC::Runtime::ASM::bl(fn_8005884C);
/*8005995C 0005675C*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*80059960 00056760*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80059964 00056764*/ PPC::Runtime::ASM::li(context->r4, 0x44);
/*80059968 00056768*/ PPC::Runtime::ASM::bl(fn_8005884C);
/*8005996C 0005676C*/ PPC::Runtime::ASM::mr(context->r28, context->r3);
/*80059970 00056770*/ PPC::Runtime::ASM::mr(context->r3, context->r25);
/*80059974 00056774*/ PPC::Runtime::ASM::mr(context->r4, context->r27);
/*80059978 00056778*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x8);
/*8005997C 0005677C*/ PPC::Runtime::ASM::bl(fn_80059364);
/*80059980 00056780*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80059984 00056784*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*80059988 00056788*/ PPC::Runtime::ASM::mr(context->r4, context->r27);
/*8005998C 0005678C*/ PPC::Runtime::ASM::li(context->r26, 0x0);
/*80059990 00056790*/ PPC::Runtime::ASM::bl(fn_HSD_ArchiveParse);
/*80059994 00056794*/ PPC::Runtime::ASM::cmpwi(context->r3, -0x1);
/*80059998 00056798*/ PPC::Runtime::ASM::bne(.L_800599C0);
/*8005999C 0005679C*/ PPC::Runtime::ASM::lis(context->r3, MemoryOffset_203 @ Get_MemoryOffset_HighBit);
/*800599A0 000567A0*/ PPC::Runtime::ASM::addi(context->r3, context->r3, MemoryOffset_203 @ Get_MemoryOffset_LowBit);
/*800599A4 000567A4*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*800599A8 000567A8*/ PPC::Runtime::ASM::bl(OSReport);
/*800599AC 000567AC*/ PPC::Runtime::ASM::lis(context->r3, String_ "lbarchive." Get_MemoryOffset_HighBit);
/*800599B0 000567B0*/ PPC::Runtime::ASM::li(context->r4, 0x5e);
/*800599B4 000567B4*/ PPC::Runtime::ASM::addi(context->r3, context->r3, String_ "lbarchive." Get_MemoryOffset_LowBit);
/*800599B8 000567B8*/ PPC::Runtime::ASM::li(context->r5, lbl_805D5270 @ Get_MemoryOffset_SDA21);
/*800599BC 000567BC*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_800599C0, 0x800599C0) //this is a jump label
/*800599C0 000567C0*/ PPC::Runtime::ASM::mr(context->r4, context->r26);
/*800599C4 000567C4*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*800599C8 000567C8*/ PPC::Runtime::ASM::addi(context->r26, context->r26, 0x1);
/*800599CC 000567CC*/ PPC::Runtime::ASM::bl(fn_8041E434);
/* 800599D0 000567D0  7C 7B 1B 79 */ mr. context->r27 , context->r3
/*800599D4 000567D4*/ PPC::Runtime::ASM::beq(.L_800599E8);
/*800599D8 000567D8*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
/*800599DC 000567DC*/ PPC::Runtime::ASM::mr(context->r4, context->r27);
/*800599E0 000567E0*/ PPC::Runtime::ASM::li(context->r5, 0x0);
/*800599E4 000567E4*/ PPC::Runtime::ASM::bl(fn_8041E46C);
RUNTIME_PPC_JUMP_LABEL(.L_800599E8, 0x800599E8) //this is a jump label
/*800599E8 000567E8*/ PPC::Runtime::ASM::cmplwi(context->r27, 0x0);
/*800599EC 000567EC*/ PPC::Runtime::ASM::bne(.L_800599C0);
/*800599F0 000567F0*/ PPC::Runtime::ASM::mr(context->r30, context->r28);
/*800599F4 000567F4*/ PPC::Runtime::ASM::li(context->r29, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_800599F8, 0x800599F8) //this is a jump label
/*800599F8 000567F8*/ PPC::Runtime::ASM::cmplwi(context->r31, 0x0);
/*800599FC 000567FC*/ PPC::Runtime::ASM::beq(.L_80059A04);
/*80059A00 00056800*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r31));
RUNTIME_PPC_JUMP_LABEL(.L_80059A04, 0x80059A04) //this is a jump label
/*80059A04 00056804*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*80059A08 00056808*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x30);
/*80059A0C 0005680C*/ PPC::Runtime::ASM::bl(_restgpr_25);
/*80059A10 00056810*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80059A14 00056814*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80059A18 00056818*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x30);
/*80059A1C 0005681C*/ PPC::Runtime::ASM::blr();
}