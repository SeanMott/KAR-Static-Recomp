//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80064900(PPC::Runtime::GCContext* context)
{
/*80064900 00061700*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0xa0, context->r1));
/*80064904 00061704*/ PPC::Runtime::ASM::mflr(context->r0);
/*80064908 00061708*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa4, context->r1));
/*8006490C 0006170C*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r1));
/*80064910 00061710*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98, context->r1)0, context->qr0);
/*80064914 00061714*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x90);
/*80064918 00061718*/ PPC::Runtime::ASM::bl(_savegpr_27);
/*8006491C 0006171C*/ PPC::Runtime::ASM::mr(context->r28, context->r4);
/*80064920 00061720*/ PPC::Runtime::ASM::mr(context->r27, context->r3);
/*80064924 00061724*/ PPC::Runtime::ASM::mr(context->r29, context->r5);
/*80064928 00061728*/ PPC::Runtime::ASM::mr(context->r30, context->r6);
/*8006492C 0006172C*/ PPC::Runtime::ASM::mr(context->r31, context->r7);
/*80064930 00061730*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x38);
/*80064934 00061734*/ PPC::Runtime::ASM::bl(fn_HSD_CObjGetEyePosition);
/*80064938 00061738*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*8006493C 0006173C*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x2c);
/*80064940 00061740*/ PPC::Runtime::ASM::bl(fn_HSD_CObjGetEyeVector?);
/*80064944 00061744*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*80064948 00061748*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*8006494C 0006174C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3c, context->r1));
/*80064950 00061750*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*80064954 00061754*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1));
/*80064958 00061758*/ PPC::Runtime::ASM::fsubs(context->f0, context->f1, context->f0);
/*8006495C 0006175C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*80064960 00061760*/ PPC::Runtime::ASM::fsubs(context->f2, context->f3, context->f2);
/*80064964 00061764*/ PPC::Runtime::ASM::lfs(context->f4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r28));
/*80064968 00061768*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*8006496C 0006176C*/ PPC::Runtime::ASM::fmuls(context->f0, context->f1, context->f0);
/*80064970 00061770*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*80064974 00061774*/ PPC::Runtime::ASM::fsubs(context->f3, context->f4, context->f3);
/*80064978 00061778*/ PPC::Runtime::ASM::fmadds(context->f0, context->f1, context->f2, context->f0);
/*8006497C 0006177C*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x34, context->r1));
/*80064980 00061780*/ PPC::Runtime::ASM::fmadds(context->f31, context->f1, context->f3, context->f0);
/*80064984 00061784*/ PPC::Runtime::ASM::bl(fn_HSD_CObjGetNear);
/*80064988 00061788*/ PPC::Runtime::ASM::fcmpo(cr0, context->f31, context->f1);
/*8006498C 0006178C*/ PPC::Runtime::ASM::bge(.L_80064998);
/*80064990 00061790*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80064994 00061794*/ PPC::Runtime::ASM::b(.L_80064A10);
RUNTIME_PPC_JUMP_LABEL(.L_80064998, 0x80064998) //this is a jump label
/*80064998 00061798*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x0);
/*8006499C 0006179C*/ PPC::Runtime::ASM::beq(.L_800649E0);
/*800649A0 000617A0*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*800649A4 000617A4*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x14);
/*800649A8 000617A8*/ PPC::Runtime::ASM::bl(fn_HSD_CObjGetEyePosition);
/*800649AC 000617AC*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*800649B0 000617B0*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x20);
/*800649B4 000617B4*/ PPC::Runtime::ASM::bl(fn_804020D0);
/*800649B8 000617B8*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*800649BC 000617BC*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*800649C0 000617C0*/ PPC::Runtime::ASM::bl(fn_HSD_CObjGetInterest);
/*800649C4 000617C4*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x44);
/*800649C8 000617C8*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x14);
/*800649CC 000617CC*/ PPC::Runtime::ASM::addi(context->r5, context->r1, 0x20);
/*800649D0 000617D0*/ PPC::Runtime::ASM::addi(context->r6, context->r1, 0x8);
/*800649D4 000617D4*/ PPC::Runtime::ASM::bl(fn_C_MTXLookAt);
/*800649D8 000617D8*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x44);
/*800649DC 000617DC*/ PPC::Runtime::ASM::b(.L_800649E8);
RUNTIME_PPC_JUMP_LABEL(.L_800649E0, 0x800649E0) //this is a jump label
/*800649E0 000617E0*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*800649E4 000617E4*/ PPC::Runtime::ASM::bl(fn_HSD_CObjSetupViewingMtx?2);
RUNTIME_PPC_JUMP_LABEL(.L_800649E8, 0x800649E8) //this is a jump label
/*800649E8 000617E8*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r28));
/*800649EC 000617EC*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*800649F0 000617F0*/ PPC::Runtime::ASM::lfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r28));
/*800649F4 000617F4*/ PPC::Runtime::ASM::mr(context->r6, context->r29);
/*800649F8 000617F8*/ PPC::Runtime::ASM::lfs(context->f3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r28));
/*800649FC 000617FC*/ PPC::Runtime::ASM::addi(context->r5, context->r31, 0x1c);
/*80064A00 00061800*/ PPC::Runtime::ASM::addi(context->r7, context->r29, 0x4);
/*80064A04 00061804*/ PPC::Runtime::ASM::addi(context->r8, context->r29, 0x8);
/*80064A08 00061808*/ PPC::Runtime::ASM::bl(fn_GXProject);
/*80064A0C 0006180C*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
RUNTIME_PPC_JUMP_LABEL(.L_80064A10, 0x80064A10) //this is a jump label
/*80064A10 00061810*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x98, context->r1)0, context->qr0);
/*80064A14 00061814*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x90);
/*80064A18 00061818*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x90, context->r1));
/*80064A1C 0006181C*/ PPC::Runtime::ASM::bl(_restgpr_27);
/*80064A20 00061820*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa4, context->r1));
/*80064A24 00061824*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80064A28 00061828*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0xa0);
/*80064A2C 0006182C*/ PPC::Runtime::ASM::blr();
}