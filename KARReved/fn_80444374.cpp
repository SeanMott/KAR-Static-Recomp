//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_80444374(PPC::Runtime::GCContext* context)
{
/*80444374 00441174*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80444378 00441178*/ PPC::Runtime::ASM::blt(.L_80444384);
/*8044437C 0044117C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x1);
/*80444380 00441180*/ PPC::Runtime::ASM::ble(.L_8044438C);
RUNTIME_PPC_JUMP_LABEL(.L_80444384, 0x80444384) //this is a jump label
/*80444384 00441184*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80444388 00441188*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_8044438C, 0x8044438C) //this is a jump label
/*8044438C 0044118C*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x0);
/*80444390 00441190*/ PPC::Runtime::ASM::blt(.L_8044439C);
/*80444394 00441194*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x1);
/*80444398 00441198*/ PPC::Runtime::ASM::ble(.L_804443A4);
RUNTIME_PPC_JUMP_LABEL(.L_8044439C, 0x8044439C) //this is a jump label
/*8044439C 0044119C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*804443A0 004411A0*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_804443A4, 0x804443A4) //this is a jump label
/*804443A4 004411A4*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*804443A8 004411A8*/ PPC::Runtime::ASM::bne(.L_804443C4);
/*804443AC 004411AC*/ PPC::Runtime::ASM::lwz(context->r0, StructValues_45 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*804443B0 004411B0*/ PPC::Runtime::ASM::clrrwi(context->r0, context->r0, 1);
/*804443B4 004411B4*/ PPC::Runtime::ASM::stw(context->r0, StructValues_45 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*804443B8 004411B8*/ PPC::Runtime::ASM::or(context->r0, context->r0, context->r4);
/*804443BC 004411BC*/ PPC::Runtime::ASM::stw(context->r0, StructValues_45 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*804443C0 004411C0*/ PPC::Runtime::ASM::b(.L_804443DC);
RUNTIME_PPC_JUMP_LABEL(.L_804443C4, 0x804443C4) //this is a jump label
/*804443C4 004411C4*/ PPC::Runtime::ASM::lwz(context->r3, StructValues_45 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*804443C8 004411C8*/ PPC::Runtime::ASM::slwi(context->r0, context->r4, 1);
/*804443CC 004411CC*/ PPC::Runtime::ASM::rlwinm(context->r3, context->r3, 0, 31, 29);
/*804443D0 004411D0*/ PPC::Runtime::ASM::stw(context->r3, StructValues_45 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*804443D4 004411D4*/ PPC::Runtime::ASM::or(context->r0, context->r3, context->r0);
/*804443D8 004411D8*/ PPC::Runtime::ASM::stw(context->r0, StructValues_45 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_804443DC, 0x804443DC) //this is a jump label
/*804443DC 004411DC*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*804443E0 004411E0*/ PPC::Runtime::ASM::blr();
}