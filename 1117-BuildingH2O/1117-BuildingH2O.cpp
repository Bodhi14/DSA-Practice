        if(hydrogenCount == 2 and oxygenCount == 1)
        cv.wait(lck, [this](){return oxygenCount == 1;});
        hydrogenCount += 1;
        releaseHydrogen();
        unique_lock<mutex> lck(m);
    condition_variable cv;
    bool start = false;
    H2O() {
        hydrogenCount = 0;
        oxygenCount = 0;
    }

    void hydrogen(function<void()> releaseHydrogen) {
        {
            hydrogenCount = 0;
            oxygenCount = 0;
            start = false;
        }
        cv.notify_all();
    }

    void oxygen(function<void()> releaseOxygen) {
"HOH"
